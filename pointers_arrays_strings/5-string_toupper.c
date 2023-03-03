#include "main.h"

/**
 * string_toupper - "(char *)"
 * @s: String to change
 * Return: Pointer to string
 *
*/


char *string_toupper(char *str)
{
	char *ptr = str;
	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - ('a' - 'A');
		}
		ptr++;
	}
	return str;
}
