#include "main.h"

/**
  * print_square - print squares with #
  * @n: size of the square
  * Return: void
  */

void print_square(int n)
{
	int hgt, wid;

	if (n > 0)
	{
		for (hgt == 0; hgt < n; hgt++)
		{
			for (wid == 0; wid < n; wid++)
			{
				_putchar('#');
			}
			if (hgt == n - 1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
