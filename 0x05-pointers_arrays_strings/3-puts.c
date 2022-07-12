#include "main.h"

/**
  * _puts - Entry point
  * Description: Prints a string
  * @str: string to be printed
  * Return: void
  */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
