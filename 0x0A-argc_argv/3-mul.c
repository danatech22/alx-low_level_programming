#include <stdio.h>
#include <stdlib.h>

/**
  * main - multiplies two argument together
  * @argc: counter
  * @argv: command array
  * Return: 0 for success
  */

int main(int argc, char *argv[])
{
	int res, i, j;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	res = i * j;
	printf("%d\n", res);
	return (0);
}
