#include "main.h"

/**
 * main - check the code
 * @str: pointer to a string
 * Return: no return
 * _puts - prints a string followed with a new line
 */
void _puts(char *str)
{
	int i;
	i = 0;

	while (str[i])
		i++;
	_putchar(str);
	putchar(\n);
}
