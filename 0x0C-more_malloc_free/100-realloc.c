#include "main.h"
#include <stdlib.h>

/**
  * _realloc - Reallocates mem using malloc and free
  * @ptr: former pointer
  * @old_size: former mem bytes
  * @new_size: new mem bytes
  * Return: void pointer
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *mem;
	char *ptr_cpy, *filler;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		mem = malloc(new_size);
		if (mem == NULL)
			return (NULL);
		return (mem);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr_cpy = ptr;
	mem = malloc(new_size * sizeof(*ptr_cpy));

	if (mem == NULL)
	{
		free(ptr);
		return (NULL);
	}
	filler = mem;

	for (i = 0; i < old_size && i < new_size; i++)
		filler[i] = *ptr_cpy++;
	free(ptr);
	return (mem);
}
