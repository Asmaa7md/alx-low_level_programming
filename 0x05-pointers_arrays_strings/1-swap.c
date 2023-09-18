#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap values of two integers
 * @a: pointer 1
 * @b: pointer 2
 * Return: no return
 */

void swap_int(int *a, int *b);
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
