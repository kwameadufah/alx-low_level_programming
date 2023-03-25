#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array of a certain number
 *           of elements each of an inputted byte size.
 * @nmemb: The number of elements.
 * @size: The byte size of each array element.
 *
 * Return: If nmemb = 0, size = 0, or the function fails - NULL.
 *         Otherwise - a pointer to the allocated memory.
 */
#include "main.h"

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *result;
	unsigned int i;
	char *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	result = malloc(nmemb * size);
	if (result == NULL)
	{
		return (NULL);
	}

	p = (char *) result;
	for (i = 0; i < nmemb * size; i++)
	{
		p[i] = 0;
	}

	return (result);
}
