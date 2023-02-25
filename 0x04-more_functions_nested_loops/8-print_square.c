#include "main.h"

/**
 * print_square - Print a square uisng the chracter #
 * @size: Is the size of the square
 */
void print_square(int size)
{
	int hght, wdth;

	if (size > 0)
	{
		for (hght = 0; hght < size; hght++)
		{
			for (wdth = 0; wdth < size; wdth++)
				_putchar('#');

			if (hght == size - 1)
				continue;
			_putchar('\n');

		}
	}
}
