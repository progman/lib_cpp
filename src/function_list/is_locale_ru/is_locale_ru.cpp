//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
bool libcore::is_locale_ru()
{
	static const char *locale_names[] =
	{
		"LANG", "LANGUAGE", "LC_CTYPE", "LC_NUMERIC", "LC_TIME", "LC_COLLATE", "LC_MONETARY", "LC_MESSAGES", "LC_PAPER", "LC_NAME", "LC_ADDRESS", "LC_TELEPHONE", "LC_MEASUREMENT", "LC_IDENTIFICATION", "LC_ALL"
	};

	for (size_t i=0; i < (sizeof(locale_names) / sizeof(locale_names[0])); i++)
	{
		char *p = getenv(locale_names[i]);
		if (p == NULL)
		{
			return false;
		}

		if (strcmp(p, "ru_RU.UTF-8") != 0)
		{
			return false;
		}
	}

	return true;
}
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//