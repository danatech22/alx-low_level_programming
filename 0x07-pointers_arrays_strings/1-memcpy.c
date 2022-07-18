#include "main.h"

/**
  * _memcpy - memory copy
  * @dest: dest memory
  * @src: src memory
  * @n: number of bytes to be copied
  * Return: string
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
