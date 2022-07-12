#include "main.h"

/**
  * print_rev - Entry point
  * Description: Prints the reverse of a string
  * @s: Pointer variable
  * Return: void
  */

void print_rev(char *s)
{
	int len, i;

	len = _strlen(s);

	for (i = len; len >= 0; len--)
		_putchar(s[i]);
	_putchar('\n');
}
