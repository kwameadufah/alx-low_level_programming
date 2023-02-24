#include "main.h"

/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/

void positive_or_negative(void)
{
	int i;

	i = 98;
	positive_or_negative(i);
	assert(strcmp(get_stdout(), "98 is positve\n") == 0);

	i = -98;
	positive_or_negative(i);
	assert(strcmp(get_stdout(), "-98 is negative\n") == 0);

	i = 0;
	positive_or_negative(i);
	assert(strcmp(get_stdout(), "0 is zero\n") == 0);

	return (0);
}
