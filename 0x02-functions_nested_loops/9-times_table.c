#include "main.h"

/**
  * times_table - Entry point
  * Description: Prints the time table
  * Return: void
  */

void times_table(void)
{
	int row, cln, prod;

	for (row = 0; row <= 9; row++)
	{
		for (cln = 0; cln <= 9; cln++)
		{
			prod = row * cln;

			if (cln == 0)
				_putchar('0');
			else if (prod < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((prod % 10) + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
