#include "main.h"
#include <stdio.h>

/**
 * wildcmp - defines if the strings identical or not
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 * Return: 1 or 0
*/

int wildcmp(char *s1, char *s2)
{
	if (*s1 == *s2)
		return (1);
	else
		return (0);
}
