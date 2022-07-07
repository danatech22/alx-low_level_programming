#include <stdio.h>

/**
  * main - prime factot
  * Return: 0
  */

int main(void)
{
	long num = 612852475143;
	long divisor = 2;
	long lg_prime = 0;

	while (num != 1)
	{
		if (num % divisor == 0)
		{
			num /= divisor;
			lg_prime = divisor;
		}
		divisor++;
	}
	printf("%ld\n", lg_prime);
	return (0);
}
