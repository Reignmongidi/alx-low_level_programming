#include "main.h"

/**
 * swap_int - to swap the values of integers.
 *
 * @a: first integer pointer.
 * @b: second integer pointer.
 **/

void swap_int(int *a, int *b)
{
	int c;
	int d;

	c = *a;
	d = *b;

	*a = d;
	*b = c;
}
