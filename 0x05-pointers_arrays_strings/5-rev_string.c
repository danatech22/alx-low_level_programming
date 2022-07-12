#include "main.h"

/**
  * rev_string - Entry point
  * Description: reverses a string
  * @s: string received
  * Return: void
  */

void rev_string(char *s)
{
	int len, i;
	char tmp;

	for (len = 0; s[len] != '\0'; len++)
		;
	i = 0;

	while (len / 2)
	{
		tmp = s[len - i - 1];
		s[len - i - 1] = s[i];
		s[i] = tmp;
		i++;
	}
}	
