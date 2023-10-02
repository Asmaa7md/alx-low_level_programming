#include <stdio.h>

/**
 * main - multiplies two numbers
 * @argc: number
 * @argv: pointer array
 * Return: 0 or 1
*/

int main(int argc, char *argv[])
{
	int i, val = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		val *= atoi(argv[i]);
	}
	printf("%d\n", val);
	return (0);
}
