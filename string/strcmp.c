int strcmp(const char*s1, const char*s2)
{
	if (*s1 == '\0' && *s2 != 0)//考慮其中一個字串為null的狀況
	{
		return (*s1 - *s2);
	}

	if (*s2 == '\0' && *s1 != 0)//考慮其中一個字串為null的狀況
	{
		return (*s1 - *s2);
	}

	for (; *s1 != '\0' && *s2 != '\0'; s1++, s2++)//兩兩字串中的字元比較
	{
		if ((*s1 - *s2) > 0)
		{
			return (*s1 - *s2);
		}

		else if ((*s1 - *s2) <0)
		{
			return (*s1 - *s2);
		}
	}

	return 0;
}