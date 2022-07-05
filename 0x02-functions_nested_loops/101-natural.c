#include <stdio.h>

/**
  * main - Print all the sum of 3 and 5
  * Return: Always 0
  */

int main(void)
{
	int i, sum = 0;

	if((i % 3 == 0) || (i % 5 == 0))
	{
		sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
