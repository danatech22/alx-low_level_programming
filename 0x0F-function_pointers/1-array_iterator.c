#include "function_pointers.h"

/**
  * array_iterator - Allows function to array
  * @array: The array
  * @size: size of an array
  * @action: A pointer to the action to be executed
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;
	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
