#include "variadic_functions.h"
#include <stdarg.h>

/**
  * sum_them_all - Return the sum of all its parameters
  * @n: number of parameters passed
  * @...: A variable number of parameters to calculate the sum of
  * Return: int
  */

int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int i, sum = 0;

	va_start(nums, n);

	for (i = 0; i < n; i++)
		sum += va_arg(nums, int);
	va_end(nums);

	return (sum);
}
