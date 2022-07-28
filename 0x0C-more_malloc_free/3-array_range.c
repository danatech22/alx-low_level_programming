#include "main.h"
#include <stdlib.h>

/**
  * array_range - an array of integers
  * @min: smallest int
  * @max: biggest int
  * Return: poiner
  */

int *array_range(int min, int max)
{
	int *arr, i, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;

	arr = malloc(size * sizeof(int));

	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = min++;
	return (arr);
}
