#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line.
 * @s: string parameter.
 *
 * Return: Nothing
 */

void print_rev(char *s)
{
	int i;
	int count = _strlen(s);

	for (i = count - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar(10);
}
