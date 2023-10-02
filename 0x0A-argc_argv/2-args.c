#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: number
 * @argv: pointer to characters array
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int x;
	
	x = 0;
	if (x < argc)
	{
		printf("%s\n", argv[x]);
		x++;
	}
	return (0);
}

