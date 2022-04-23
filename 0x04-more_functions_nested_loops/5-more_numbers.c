#include "main.h"

/**
 * more_numbers - prints 10 times the numbers followed ny new line
 *
 * Return: Always 0 (Success)
 */

void more_numbers(void)
{
int a, b, c;

for (c = 0; c < 10; c++)
{
for (a = 0; a <= 1; a++)
{
for (b = 0; b <= 9; b++)
{
if (!(a == 1 && c >= 5))
{
if (a)
_putchar(a + '0');
_putchar(b + '0');
}
}
}
_putchar('\n');
}
}
