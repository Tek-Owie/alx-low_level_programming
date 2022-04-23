#include <stdio.h>

/**
 * main - prints fizz for int divisble by 3 and Buzz for 5
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i;

for (i = 1; i < 100; i++)
{
if (i % 3 == 0 && i % 5 != 0)
{
printf("Fizz");
}
else if (i % 3 != 0 && i % 5 == 0)
{
printf("Buzz");
}
else if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz");
}
else
{
printf("%d", i);
}
if (i != 100)
_putchar(' ');
else
_putchar('\n');
}
return (0);
}
