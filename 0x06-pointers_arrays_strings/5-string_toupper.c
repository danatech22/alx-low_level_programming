#include "main.h"

/**
  * *string_toupper - Converts lowercase to upper
  * @str: a string received
  * Return: pointer
  */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	}
	return (str);
}
