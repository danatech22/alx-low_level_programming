#include "main.h"

/**
  * print_times_table - Entry point
  * @n: integer received
  * Description: Print times table up to the integer
  * Return: void
  */

void print_times_table(int n)
{
	int row, cln, prod;

	if ( n >= 0 && n <= 15)
	{
		for (row = 0; row <= n; row++)
		{
			for (cln = 0; cln <= n; cln++)
			{
				prod = row * cln;

				if (prod > 99)
				{
					_putchar(',');
					_putchar(32);
					_putchar((prod / 100) + '0');
					_putchar(((prod /10) % 10) + '0');
					_putchar((prod % 10) + '0');
				}
				else if (prod > 9)
				{
					_putchar(',');
					_putchar(32);
					_putchar(32);
					_putchar((prod / 10) + '0');
					_putchar((prod % 10) + '0');
				}
				else
				{
					if (cln != 0)
					{
						_putchar(',');
						_putchar(32);
						_putchar(32);
						_putchar(32);
					}
					_putchar(prod + '0');
				}
			}
			_putchar('\n');
		}
	}
}
