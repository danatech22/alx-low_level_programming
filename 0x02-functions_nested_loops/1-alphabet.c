#include "main.h"

/**
  * print_alphabet - Entry point
  * Description: A function that can  prints the alphabet in lowercase with a new line
  * Return: void
  */

void print_alphabet(void)
{
	char ltr;

	for (ltr = 'a'; ltr <= 'z'; ltr++)
	{
		_putchar(ltr);
	}
	_putchar('\n');
}
