#include <stdio.h>

/**
  * main - A function to counts its command
  * @argc: the counter
  * @argv:  the array
  * Return: 0 for success
  */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
