#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
  * is_palindrome - checks for palindrome
  * @s: string to reverse
  * Return: 1 if true, O if false
  */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
  * _strlen_recursion - returns the length of a string
  * @s: string given
  * Return: length of a string
  */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
  * check_pal - checks for palindrome
  * @s: string given
  * @i: iterator
  * @len: length of a string
  * Return: 1 if true, 0 if false
  */

int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
