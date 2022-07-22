#include <stdio.h>

/**
  * main - A function to print its name
  * @argc: argument counter
  * @argv: array of command list
  * Return: 0 for success
  */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
