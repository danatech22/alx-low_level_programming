#include "main.h"

/**
  * isalpha - Checks is character is uppercase
  * @c: The character to receive
  * Return: 1 if true, 0 if false
  */

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
