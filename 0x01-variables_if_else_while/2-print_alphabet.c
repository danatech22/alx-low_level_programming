#include <stdio.h>
#include <unistd.h>

/**
  * main - Entry point
  * Description: Prints the alphabet in lower case
  * Return: 0
  */

int main(void)
{
	int ch;


	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
