#include "main.h"

/**
  * puts2 - Entry point
  * Description: Prints the even character index
  * @str: string used
  * Return: void
  */

void puts2(char *str)
{
	int i = 0, len = 0;

	while (str[i++])
		len++;

	for (i = 0; i < len; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
