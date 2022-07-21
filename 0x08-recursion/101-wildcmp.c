#include "main.h"

int strlen_no_wilds(char *str);
void iterate_wild(char **wildstr);
char *postfix_match(char *str, char *postfix);
int wildcmp(char *s1, char *s2);

/**
  * strlen_no_wilds - Returns length of a string no wilds
  * @str: string to be measured
  * Return: the length
  */

int strlen_no_willds(char *str)
{
	int len = 0, i = 0;

	if (*(str + i))
	{
		if (*str != '*')
			len++;
		i++;
		len += strlen_no_wilds(str + i);
	}
	return (len);
}

/**
  * iterate_wild - iterates through a string with wildcard
  * @wildstr: string to be iterated
  */

void iterate_wild(char **wildstr)
{
	if (**wildstr == '*')
	{
		(*wildstr)++;
		iterate_wild(wildstr);
	}
}

/**
  * postfix_match - compare str with postfix
  * @str: the string to be matched
  * @postfix: the postfix
  * Return: string
  */

char *postfix_match(char *str, char *postfix)
{
	int str_len = strlen_no_wilds(str) - 1;
	int postfix_len = strlen_no_wilds(postfix) - 1;

	if (*postfix == '*')
		iterate_wild(&postfix);
	if (*(str + str_len - postfix_len) == *postfix && *postfix != '\0')
	{
		postfix++;
		return (postfix_match(str, postfix));
	}
	return (postfix);
}

/**
  * wildcmp - compares two string
  * @s1: first string
  * @s2: second string
  * Return: int
  */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		iterate_wild(&s2);
		s2 = postfix_match(s1, s2);
	}
	if (*s2 == '\0')
		return (1);
	if (*s1 != *s2)
		return (0);
	return (wildcmp(++s1, ++s2));
}
