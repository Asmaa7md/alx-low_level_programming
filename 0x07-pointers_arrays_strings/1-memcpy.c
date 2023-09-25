#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copies memory area
 * @dest: pointer to destination
 * @src: pointer to source
 * @n: number of bytes
 * Return: *dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	while (x < n)
	{
		src[x] = dest[x];
			x++;
	}
		return (dest);
}
