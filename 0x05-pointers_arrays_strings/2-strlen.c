#include "main.h"

/**
  * _strlen - Entry point
  * Description: Returns the length of a string
  * @s: the pointer variable
  * Return: int
  */

int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;

	return (len);
}
