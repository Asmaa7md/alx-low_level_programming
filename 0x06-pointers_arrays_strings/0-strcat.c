#include "main.h"
#include <stdio.h>

/**
 * *_strcat - function that concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: void
*/

char *_strcat(char *dest, char *src)
{
	int x;
	int y;

	x = 0;
	while (dest[x] != '\0')
		x++;
	y = 0;
	while (src[y] != '\0')
		dest[x] = srt[x];
		x++;
		y++;
	dest[x] = '\0';

	return (dest);

}




