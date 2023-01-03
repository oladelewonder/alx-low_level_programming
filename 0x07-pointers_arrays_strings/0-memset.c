#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area
 * pointed to by @s with the constant byte @b.
 * @s: a pointer to the memory area to be filled
 * @b: the charater to fill the memory area with
 * @n: the number of byte to be filled
 * description _memset: over there
 *
 * Return: a pointer to the filled memory area @s
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
