//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
// check pointer and strlen
size_t libcore::strlen(const char *pstr)
{
	if (pstr == NULL) return 0;

	return ::strlen(pstr);
}
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
