#include "main.h"
#include <stdio.h>

/**
 * _strlen - find the length of a string
 * @s: pointer to the stirling to check
 * Return: i.
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}
