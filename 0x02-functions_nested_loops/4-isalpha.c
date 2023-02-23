#include "main.h"
/**
 * _isalpha - checks for alphabet characters, lowercase or uppercase
 * @c: character to be checked
 *
 * Return: 1 if character is alphabet lowercase or uppercase, otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'Z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
