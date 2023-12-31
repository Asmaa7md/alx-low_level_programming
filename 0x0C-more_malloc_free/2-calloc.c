#include "main.h"

/**
 * _memset - prints buffer in hexa
 * @s: pointer
 * @b: number of characters
 * @n: number of bytes
 * Return: Nothing.
*/
char *_memset(char *s, char x, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = x;
	}
	return (s);
}

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: n elements
 * @size: bytes
 * Return: pointer
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);
	_memset(p, 0, (nmemb * size));
	return (p);
}

