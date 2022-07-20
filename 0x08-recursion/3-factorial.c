#include "main.h"

/**
  * factorial - Factorial function
  * @n: number given
  * Return: An integer
  */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
