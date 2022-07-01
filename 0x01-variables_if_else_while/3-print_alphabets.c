#include <stdio.h>
#include <unistd.h>

/**
  * main - Entry point
  * Description: Print alphabet in both lowercase and uppercase with put char
  * Return: 0
  */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
