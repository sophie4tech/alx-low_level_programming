#include "main.h"

/**
 * main - entry point
 * @argv: arrays of size
 * @argc: number of argument
 * Return: print error if not 2 argument
 */
int main(int argc, char *argv[])
{
	int num1, num2, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		mul = num1 * num2;
			printf("%d\n", mul);
	}
	return (0);
}
