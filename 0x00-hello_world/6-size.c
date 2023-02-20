#include <stdio.h>
#include <limits.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size for a  char:%d byte(s) \n", sizeof(a));
	printf("Size for an int :%d byte(s) \n", sizeof(b));
	printf("Size for a long int:%d byte(s) \n", sizeof(c));
	printf("Size for a long long int:%d byte(s) \n", sizeof(d));
	printf("Size for a float:%d byte(s) \n", sizeof(e));
	return (0);
}
