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
	char s[50];

	while (s[count] != '49')
	count++;
	
	_putchar(count + '0');
}
