#include <stdio.h>

/**
  * main - main block
  * Description: Computes and prints even number
  * Return: 0
  */

int main(void)
{
	unsigned long fib1 = 0, fib2 = 1;
	unsigned long fibsum = 0,  next = 0;

	while (next < 4000000)
	{
		next = fib1 + fib2;
		fib1 = fib2;
		fib2 = next;
		if (next % 2 == 0)
			fibsum += next;
	}
	printf("%lu\n", fibsum);
	return (0);
}
