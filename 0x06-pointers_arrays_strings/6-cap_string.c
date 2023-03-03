#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
	int cap_next = 1;
	char *p = str;

	while (*p != '\0')
	{
		if (cap_next && *p >= 'a' && *p <= 'z')
		{
			*p -= ('a' - 'A');
		}

		cap_next = 0;

		switch (*p)
		{
			case ' ':
			case '\t':
			case '\n':
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
				cap_next = 1;
				break;
			default:
				break;
		}

		++p;
	}

	return (str);
}
