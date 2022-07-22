#include <stdio.h>
#include <stdlib.h>

/**
  * main - Finds change
  * @argc: counter
  * @argv: command array
  * Return: int
  */

int main(int argc, char *argv[])
{
	int num, i, res = 0;
	int coin[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5 && num >= 0; i++)
	{
		while (num >= coin[i])
		{
			num -= coin[i];
			res++;
		}
	}
	printf("%d\n", res);
	return (0);
}
