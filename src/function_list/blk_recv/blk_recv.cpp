//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
// block recv from handle
size_t libcore::blk_recv(int handle, void *pdata, size_t size)
{
	uint8_t *p = (uint8_t *)pdata;
	size_t cur_size = size;


	for (;;)
	{
		if (cur_size == 0) break;

		ssize_t rc = ::recv(handle, p, cur_size, MSG_NOSIGNAL);

		if (rc == 0)
		{
			return -1;
		}
		if (rc == -1)
		{
			if (errno == EAGAIN)
			{
				continue;
			}
			return -1;
		}

		p += rc;
		cur_size -= rc;
	}


	return size;
}
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
