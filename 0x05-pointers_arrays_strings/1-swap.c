#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers.
 * @a: value of first integer.
 * @b: value of second integer.
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int c;
	*c = *a;
	*b = *a;
	*a = *c;
}
