#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - prints an integer
 * @:size: the size of the array
 * @action: pointer to the function
 * @array: integers
 *
 * Return: Nothing.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
	}
}
