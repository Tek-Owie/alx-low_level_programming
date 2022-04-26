#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: string argument
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int count = 0;
	char s[] = {};

	while (s[count] != '\0')
	count++;
	
	_putchar(count + '0');
}
