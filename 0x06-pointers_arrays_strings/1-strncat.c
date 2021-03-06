#include "main.h"

/**
  * *_strncat - Concatenates two strings
  * @dest: destination string
  * @src: source string
  * @n: integer received
  * Return: pointer
  */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, len = 0;

	while (dest[i++])
		len++;
	for (i = 0; src[i] && i < n; i++)
		dest[len++] = src[i];
	return (dest);
}
