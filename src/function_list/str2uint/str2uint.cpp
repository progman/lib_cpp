//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
// convert const char * to uint
bool libcore::str2uint(uint64_t &value, uint64_t default_value, const char *pstr, size_t size)
{
	if (size == 0)
	{
		value = default_value;
		return false;
	}


	if (is_hex(pstr, size, true) != false) // 0x??
	{
		if (libcore::hex2uint(value, default_value, pstr, size) != false)
		{
			return true;
		}
	}


	if (is_sdec(pstr, size) != false)
	{
		if (libcore::dec2sint((int64_t &)value, (int64_t &)default_value, pstr, size) != false)
		{
			return true;
		}
	}


	if (is_udec(pstr, size) != false)
	{
		if (libcore::dec2uint(value, default_value, pstr, size) != false)
		{
			return true;
		}
	}


	return false;
}
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
// convert const char * to uint
bool libcore::str2uint(uint64_t &value, uint64_t default_value, const char *pstr)
{
	return libcore::str2uint(value, default_value, pstr, libcore::strlen(pstr));
}
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
// convert const char * to uint
bool libcore::str2uint(uint64_t &value, uint64_t default_value, const std::string &str)
{
	return libcore::str2uint(value, default_value, str.c_str(), str.size());
}
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
// convert const char * to uint
bool libcore::str2uint(uint64_t &value, const char *pstr, size_t size)
{
	return libcore::str2uint(value, 0, pstr, size);
}
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
// convert const char * to uint
bool libcore::str2uint(uint64_t &value, const char *pstr)
{
	return libcore::str2uint(value, 0, pstr, libcore::strlen(pstr));
}
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
// convert const char * to uint
bool libcore::str2uint(uint64_t &value, const std::string &str)
{
	return libcore::str2uint(value, 0, str.c_str(), str.size());
}
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//