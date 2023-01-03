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
	unsigned int i;
	unsigned char *memory = s, value = b;

	for (i = 0; i < n; i++)
		memory[i] = value;

	return (memory);
}
