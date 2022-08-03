#include "function_pointers.h"

/**
  * int_index - Searches for an integer in an array
  * @array: array of integers
  * @size: size of the array
  * @cmp: A pointer to the function that uses to compare
  * Return: int
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
