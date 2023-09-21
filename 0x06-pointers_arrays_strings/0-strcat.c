#include "main.h"

/**
 * *_strcat - function that concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: void
*/

char *_strcat(char *dest, char *src)
{
	int x = -1, y;
	for (y = 0; dest[y] != '\0'; y++)
	;

	do {
		x++;
		dest[y] = src[x];
		y++;
	}
	while (src[x] != '\0');
	return (dest);
}




