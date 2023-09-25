#include "main.h"
#include <stdio.h>

/*
 * _strchr - locates a character in a string.
 * @s: pointer string
 * @c: character
 * Return: *s or 0
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
		if (*s == c)
			return (s);
			s++;
		else
			return (0);
}
