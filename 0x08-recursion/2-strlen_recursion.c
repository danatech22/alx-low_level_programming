#include "main.h"

/**
  * _strlen_recursion - to get length of a string
  * @s: String given
  * Return: integer
  */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (1 + _strlen_recursion(s));
}
