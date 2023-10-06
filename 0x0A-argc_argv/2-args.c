#include "main.h"

/**
 * main - entry point
 * @argv: arrays of size
 * @argc: number of argument
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int y;

	for (y = 0; y < argc; y++)
	{
		printf("%s\n", argv[y]);
	}
	return (0);
}
