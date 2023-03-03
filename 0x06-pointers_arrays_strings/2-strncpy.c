#include "main.h"

/**
 * _strncpy - Copies at most an inputted number
 *            of bytes from string src into dest.
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 * @n: The maximum number of bytes to copied from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;
	int i;

	for (i = 0; i < n && *src != '\0'; i++)
	{
		*ptr = *src;
		ptr++;
		src++;
	}

	while (i < n)
	{
		*ptr = '\0';
		ptr++;
		i++;
	}

	return (dest);
}
