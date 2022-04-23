#include "main.h"

/**
 * print_most_numbers - prints numbers b/n 0 to 9
 * except 2 and 4
 * Return: ALways 0 (Success)
 */

void print_most_numbers(void)
{
int b;

b = 0;

for (b = 0; b <= 9; b++)
{
if (b == 2 || b == 4)
b++;

_putchar(b + '0');

}
_putchar('\n');

}
