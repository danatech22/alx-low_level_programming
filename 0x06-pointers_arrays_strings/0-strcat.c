#include "main.h"

/**
  * *_strcat: cocantenate src to dest
  * @src: String to be added
  * @dest: string to collect the added word
  * Return: Returns a pointer
  */

char *_strcat(char *dest, char *src)
{
	int i = 0, len = 0;

	while (dest[i++])
		len++;
	for (i = 0; src[i]; i++)
		dest[len++] = src[i];
	return (dest);
}
