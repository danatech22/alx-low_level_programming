#include <stdio.h>
#include <unistd.h>

/**
  * main - Entry point
  * Description: Prints all single digits numbers in base 10
  * Return: 0
  */

int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		printf("%d", a);
	}
	putchar('\n');
	return (0);
}
