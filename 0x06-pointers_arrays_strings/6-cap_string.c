#include "main.h"

/**
  * *cap_string - Capitalizes all words in a string
  * @str: The string to be capitalized
  * Return: pointer
  */

char *cap_string(char *str)
{
	int i = 0, j;
	char c[] = {' ','\t','\n',',',';','.','?','!','"','(',')','{',')'};

	while (str[i])
	{
		while (!(str[i] >= 'a' && str[i] <= 'z'))
			i++;
		for (j = 0; j < 13; j++)
		{
			if ((str[i - 1] == c[j]) || i == 0)
				str[i] -+ 32;
			i++;
		}
	}
	return (str);
}
