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

	printf("Size for char data type:%d \n", sizeof(a));
	printf("Size for int data type:%d \n", sizeof(b));
	printf("Size for long int data type:%d \n", sizeof(c));
	printf("Size for long long int data type:%d \n", sizeof(d));
	printf("Size for float data type:%d \n", sizeof(e));
	return (0);
}
