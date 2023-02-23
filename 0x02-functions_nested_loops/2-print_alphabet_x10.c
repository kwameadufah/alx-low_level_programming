#include "main.h"
/**
 * print_alphabet_x10 -  Prints alphabet in lowercase ten times
 */
void print_alphabet(void)
{
	char letter;
	int times = 0;

	while (times++ <= 9)

	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);

		_putchar('\n');
	}
}
