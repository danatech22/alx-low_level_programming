#include "main.h"

/**
  * rev_string - Entry point
  * Description: reverses a string
  * @s: string received
  * Return: void
  */

void rev_string(char *s)
{
	int len, i, half;
	char tmp;

	for (len = 0; s[len] != '\0'; len++)
		;
	i = 0;
	half = len / 2;

	while (half--)
	{
		tmp = s[len - i - 1];
		s[len - i - 1] = s[i];
		s[i] = tmp;
		i++;
	}
}
