#include "main.h"
/**
 * swap_int - a function that swaps the value of two int
 * @a: the first integer
 * @b: the second integer
 */
void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
