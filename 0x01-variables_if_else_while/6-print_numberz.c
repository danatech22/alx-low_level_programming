#include <stdio.h>
#include <unistd.h>

/**
  * main - Entry points
  * Description: Print s numbers in base ten with the put char
  * Return: 0
  */

int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
	}
	putchar('\n');
	return (0);
}
