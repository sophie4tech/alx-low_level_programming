#include "main.h"

/**
 * main - entry point
 * @argv: arrays of strings
 * @argc: number of argument
 * Return: print error on non digit numbers
 */
int main(int argc, char *argv[])
{
	int y, z, add;

	(void)argv;
	add = 0;
	if (argc > 1)
	{
		for (y = 1; y < argc; y++)
		{
			for (z = 0; argv[y][z] != '\0'; z++)
			{
				if (!isdigit(argv[y][z]))
				{
					printf("Error\n");
					return (1);
				}
			}
			add += atoi(argv[y]);
		}
	}
	printf("%d\n", add);
	return (0);
}
