#include <stdio.h>

/**
  * main - Prints all its argument
  * @argc: counter
  * @argv: command array
  * Return: 0 for success
  */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
