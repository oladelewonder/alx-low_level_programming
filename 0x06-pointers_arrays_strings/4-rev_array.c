#include "main.h"

/**
 * reverse_array - a function that reverse the content of an integer
 *
 * @a: pointer input value
 * @n: input for number of element of the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int tmp, i;

	for (i = n - 1; i >= n / 2; i--)
	{
		tmp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = tmp;
	}
}
