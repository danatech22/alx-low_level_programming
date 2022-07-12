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

	for (i = 0; str[i] != '\0'; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
