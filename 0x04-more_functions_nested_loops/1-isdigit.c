#include "main.h"

/**
 * _isdigit - Checks for a digit (0 through 9)
 * @c: input  number
 * Return: 1 if c is a number, 0 otherwise
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}

else
{
return (0);
}
_putchar('\n');
}
