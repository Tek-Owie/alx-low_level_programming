#include <stdio.h>

/**
 * main - Entry Point
 * Return: ALways 0 (Success)
 */

int main(void)
{
int c;

for (c = 0; c < 26; ++c)
putchar('a' + c);

putchar('\n');

return (0);
}