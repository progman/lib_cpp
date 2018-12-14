//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
// remove file extension
bool libcore::remove_file_ext(std::string &filename)
{
	size_t pos = filename.rfind('.');

	if (pos != size_t(-1))
	{
		filename.resize(pos);
		return true;
	}


	return false;
}
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//