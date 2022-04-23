#include "main.h"

/**
 * print_line - prints underscores
 * @n: limit
 *
 * Return: void
 */

void print_line(int n)
{
int u;

if (n > 0)
{
for (u = 0; u < n; u++)
{
_putchar('_');
}
}
_putchar('\n');
}
