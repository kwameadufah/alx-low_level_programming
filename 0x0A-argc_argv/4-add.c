#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit - checks if a string is a positive integer
 * @s: the string to check
 *
 * Return: 1 if @s is a positive integer, 0 otherwise
 */
int is_digit(char *s)
{
	while (*s != '\0')
	{
		if (*s < '0' || *s > '9')
			return (0);
		s++;
	}

	return (1);
}

/**
 * main - adds positive numbers passed as arguments
 * @argc: the number of arguments passed to the program
 * @argv: an array of pointers to the arguments
 *
 * Return: 0 if successful, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (!is_digit(argv[i]))
		{
			printf("Error\n");
			return (1);
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
