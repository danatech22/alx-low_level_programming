#include <stdio.h>

/**
  * main - Prints the first 98 fibonacci
  * Return: 0
  */

int main(void)
{
	int count;
	unsigned long fib1 = 0, fib2 = 1, sum;
	unsigned long fib1_hlf1, fib1_hlf2, fib2_hlf1, fib2_hlf2;
	unsigned long hlf1, hlf2;

	for (count = 0; count < 92; count++)
	{
		sum = fib1 + fib2;
		printf("%lu, ", sum);

		fib1 = fib2;
		fib2 = sum;
	}
	fib1_hlf1 = fib1 / 10000000000;
	fib2_hlf1 = fib2 / 10000000000;
	fib1_hlf2 = fib1 % 10000000000;
	fib2_hlf2 = fib2 % 10000000000;

	for (count = 93; count < 99; count++)
	{
		hlf1 = fib1_hlf1 + fib2_hlf1;
		hlf2 = fib1_hlf2 + fib2_hlf2;
		if (hlf2 > 9999999999)
		{
			hlf1 += 1;
			hlf2 %= 10000000000;
		}
		printf("%lu%lu", hlf1, hlf2);
		if (count != 98)
			printf(", ");
		fib1_hlf1 = fib2_hlf1;
		fib1_hlf2 = fib2_hlf2;
		fib2_hlf1 = hlf1;
		fib2_hlf2 = hlf2;
	}
	printf("\n");
	return (0);
}
