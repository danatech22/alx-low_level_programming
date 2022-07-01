#include <stdio.h>
#include <unistd.h>

/**
  * main - Entry point
  * Description: Print in hexadecimal
  * Return: 0
  */

int main(void)
{
	int m, n;

	for (m = 0; m <= 9; m++)
	{
		putchar(m + '0');
	}
	for (n = 'a'; n <= 'f'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
