#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * main - Entry point
 *
 * Return: 1
 */
int main(void)
{
	write(STDOUT_FILEND, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
