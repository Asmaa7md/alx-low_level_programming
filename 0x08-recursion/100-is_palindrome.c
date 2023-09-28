#include "main.h"
#include <stdio.h>

/**
 * is_palindrome - defines if the string is palindrome
 * @s: pointer to a string
 * Return: 0 or 1
*/

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	else
		return (0);
}
