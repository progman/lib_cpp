//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
/**
 * flip bytes in buffer
 * \param[in,out] pbuffer buffer bytes
 * \param[in] size size buffer
 */
void libcore::flip(void *pbuffer, size_t size)
{
	if (size < 2) return;

	uint8_t *p1 = (uint8_t *)pbuffer;
	uint8_t *p2 = (uint8_t *)pbuffer + size - 1;

	for (size_t i=0; i < (size / 2); i++)
	{
		uint8_t x = *p1;
		*p1 = *p2;
		*p2 = x;
		p1++;
		p2--;
	}
}
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//