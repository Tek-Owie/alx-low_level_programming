#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9
 *
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{

int c;

c = 0;

for (c = 0; c <= 9; c++)

_putchar(c + '0');

_putchar('\n');
}
