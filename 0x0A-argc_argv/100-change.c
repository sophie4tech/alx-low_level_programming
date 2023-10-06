#include "main.h"

/**
 * main - entry point
 * @argv: arrays size
 * @argc: number of argument
 * Return: print error if not exactly 1
 */
int main(int argc, char *argv[])
{
	int change, input;
	unsigned int x;
	char *p;
	int coins[] = {25, 10, 5, 2};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	input = strtol(argv[1], &p, 10);
	change = 0;

	if (!*p)
	{
		while (input > 1)
		{
			for (x = 0; x < sizeof(coins[x]); x++)
			{
				if (input >= coins[x])
				{
					change += input / coins[x];
					input %= coins[x];
				}
			}
		}
		if (input == 1)
			change++;
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", change);
	return (0);
}
