#include "main.h"

/**
  * print_triangle - Prints a triangle
  * @size: integer type
  * Return: void
  */

void print_triangle(int size)
{
	int hash, i;

	if (size > 0)
	{
		for (hash = 1; hash <= size; hash++)
		{
			for (i = size - hash; i > 0; i--)
				_putchar(32);

			for (i = 0; i < hash; i++)
				_putchar('#');

			if (hash == size)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
