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

	if (n >= 0 && n <= 15)
	{
		for (row = 0; row <= n; row++)
		{
			_putchar('0');
			for (cln = 1; cln <= n; cln++)
			{
				_putchar(',');
				_putchar(32);
				prod = row * cln;
				if (prod <= 99)
					_putchar(32);

				if (prod <= 9)
					_putchar(32);

				if (prod >= 100)
				{
					_putchar((prod / 100) + '0');
					_putchar(((prod / 10) % 10) + '0');
				}
				else if (prod <= 99 && prod >= 10)
				{
					_putchar((prod / 10) + '0');
				}
				_putchar((prod % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
