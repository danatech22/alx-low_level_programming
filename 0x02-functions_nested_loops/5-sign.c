#include "main.h"

/**
  * print_sign - Entry point
  * @n: integer received
  * Description: Checks if an integer is positive or negative
  * Return: 1 if n is +ve, 0 if n is zero, -1 if n is -ve
  */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
