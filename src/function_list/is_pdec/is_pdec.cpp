//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
/**
 * check whether a string is equivalent to regexp [+]?[0-9]+
 * \param[in] pstr string
 * \param[in] size size string
 * \return flag correct check
 */
bool libcore::is_pdec(const char *pstr, size_t size)
{
	return is_udec(pstr, size);
}
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
/**
 * check whether a string is equivalent to regexp [+]?[0-9]+
 * \param[in] str string
 * \return flag correct check
 */
bool libcore::is_pdec(const std::string &str)
{
	return is_udec(str);
}
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
