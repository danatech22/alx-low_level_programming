#include "main.h"

/**
  * print_rev - Entry point
  * Description: Prints the reverse of a string
  * @s: Pointer variable
  * Return: void
  */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
		_putchar(s[i]);
	_putchar('\n');
}
