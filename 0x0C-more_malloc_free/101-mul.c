#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int find_len(char *str);
char *create_xarray(int size);
char *iterate_zeroes(char *str);
void get_prod(char *prod, char *mult, int digit, int zeroes);
void add_nums(char *final_prod, char *next_prod, int next_len);

/**
  * find_len - finds the length of a string
  * @str: The string
  * Return: The length of a string
  */

int find_len(char *str)
{
	int i = 0;

	while (*str++)
		i++;
	return (i);
}

/**
  * create_xarray - creates an array filled with x
  * @size: size of the array
  * Description: if space not enough exit(98)
  * Return: A pointer to the array
  */

char *create_xarray(int size)
{
	char *arr;
	int i;

	arr = malloc(size * sizeof(char));

	if (arr == NULL)
		exit(98);

	for (i = 0; i < (size - 1); i++)
		arr[i] = 'x';
	arr[i] = '\0';
	return (arr);
}

/**
  * iterate_zeroes - gets first significant number
  * @str: string to iterates through
  * Return: pointer to the significant no
  */

char *iterate_zeroes(char *str)
{
	while (*str && *str == '0')
		str++;
	return (str);
}

/**
  * get_digit - converts a digit char to an int
  * @c: char to be converted
  * Description: if c is not a non digit number exit(98)
  * Return: converted int
  */

int get_digit(char c)
{
	int digit = c - '0';

	if (digit < 0 || digit > 9)
	{
		printf("Error\n");
		exit(98);
	}
	return (digit);
}

/**
  * get_prod - Multiplies a string of numbers by a single digit
  * @prod: buffer to store the result
  * @mult: String of numbers
  * @digit: The single digit
  * @zeroes: The neccessary number of leading zeroes
  * Description: if mult have non digit exit (98)
  */

void get_prod(char *prod, char *mult, int digit, int zeroes)
{
	int mult_len, num, tens = 0;

	mult_len = find_len(mult) - 1;
	mult += mult_len;

	while (*prod)
	{
		*prod = 'x';
		prod++;
	}
	prod--;

	while (zeroes--)
	{
		*prod = '0';
		prod--;
	}

	for (; mult_len >= 0; mult_len--, mult--, prod--)
	{
		if (*mult < '0' || *mult > '9')
		{
			printf("Error\n");
			exit(98);
		}

		num  = (*mult - '0') * digit;
		num += tens;
		*prod = (num % 10) + '0';
		tens = num / 10;
	}

	if (tens)
		*prod = (tens % 10) + '0';
}

/**
  * add_nums - Adds the number stored in two strings
  * @final_prod: buffer storing the running final product
  * @next_prod: next prod to be added
  * @next_len: length of next prod
  */

void add_nums(char *final_prod, char *next_prod, int next_len)
{
	int num, tens = 0;

	while (*(final_prod + 1))
		final_prod++;
	while (*(next_prod + 1))
		next_prod++;

	for (; *final_prod != 'x'; final_prod--)
	{
		num = (*final_prod - '0') + (*next_prod - '0');
		num += tens;
		*final_prod = (num % 10) + '0';
		tens = num / 10;

		next_prod--;
		next_len--;
	}

	for (; next_len >= 0 && *next_prod != 'x'; next_len--)
	{
		num = (*next_prod - '0');
		num += tens;
		*final_prod = (num % 10) + '0';
		tens = num / 10;

		final_prod--;
		next_prod--;
	}
	if (tens)
		*final_prod = (tens % 10) + '0';
}

/**
  * main - Multiplies two number
  * @argv: argument
  * @argc: number of argument
  * Description: contains wrong parameter exit(98);
  * Return: 0
  */

int main(int argc, char *argv[])
{
	char *final_prod, *next_prod;
	int size, i, digit, zeroes = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (*(argv[1]) == '0')
		argv[1] == iterate_zeroes(argv[1]);
	if (*(argv[2]) == '0')
		argv[2] == iterate_zeroes(argv[2]);
	if (*(argv[1]) == '\0' || *(argv[2]) == '\0')
	{
		printf("0\n");
		return (0);
	}

	size = find_len(argv[1]) + find_len(argv[2]);
	final_prod = create_xarray(size + 1);
	next_prod = create_xarray(size + 1);

	for (i = find_len(argv[2]) - 1; i >= 0; i--)
	{
		digit = get_digit(*(argv[2] + i));
		get_prod(next_prod, argv[1], digit, zeroes++);
		add_nums(final_prod, next_prod, size - 1);
	}

	for (i = 0; final_prod[i]; i++)
	{
		if (final_prod[i] != 'x')
			putchar(final_prod[i]);
	}

	putchar('\n');

	free(next_prod);
	free(final_prod);

	return (0);
}
