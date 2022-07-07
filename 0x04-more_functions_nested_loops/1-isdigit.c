#include "main.h"

/**
  * _isdigit - checks if it is a digit
  * @c: character received
  * Return: 1 if true and 0 if false
  */

int _isupper(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
