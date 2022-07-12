#include "main.h"

/**
  * swap_int - Entry point
  * Description: swaps the two parameters
  * @a: first parameter
  * @b: second parameter
  * Return: void
  */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
