#include "main.h"

/** print_numbers - print numbers fro 1 to 9
  * Return: void
  */

void print_numbers(void)
{
	int i;

	for (i = 1; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
