#include "main.h"
#include <stdlib.h>

/**
  * _calloc - calloc-like
  * @nmemb: number of elements
  * @size: The byte size
  * Return: A pointer
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *fill;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	mem = malloc(nmemb * size);

	if (mem == NULL)
		return (NULL);
	fill = mem;

	for (i = 0; i < (nmemb * size); i++)
		fill[i] = '\0';
	return (mem);
}
