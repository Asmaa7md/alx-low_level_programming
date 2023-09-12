#include "main.h"

/**
 * main - check the code.
 *
 * Describtion: printing alphabet 10 times
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int ch;

	for (line = 0; line <= 10; line++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar (ch);
		_putchar('\n');
	}
}
