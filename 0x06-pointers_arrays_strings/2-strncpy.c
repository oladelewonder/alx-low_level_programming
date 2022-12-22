#include "main.h"

/**
 * _strncpy - a function that copies a string
 * @dest: input for pointer value
 * @src: input for pointer value
 * @n: input for the max number of bytes to be copied from src
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, src_len = 0;

	while (src[i++])
		src_len++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (i = src_len; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
