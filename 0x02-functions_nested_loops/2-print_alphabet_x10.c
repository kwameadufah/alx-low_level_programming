#include "main.h"
/**
 * Print alphabet in lowercase, followed by a new line
 */
void print_alphabet(void)
{
	char letter;
	int times = 0;

	while (times++ <= 9)

	{
		for (letter = 'a'; letter <= 'z'; letter++);
			_putchar(letter);

		_putchar('\n');
	}

	return (0);
}
