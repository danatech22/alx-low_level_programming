#include "main.h"

/**
  * print_last_digit - Entry point
  * @n: n is an integer
  * Description: Prints the last number of a number
  * Return: integer
  */

int print_last_digit(int n)
{
	int lsd = n % 10;

	if (lsd < 0)
		lsd = -lsd;
	_putchar(lsd + '0');
	return (lsd);
}
