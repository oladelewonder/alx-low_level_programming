#include "main.h"

/**
 * *_strcat - a function that concatinate two strings
 *
 * @dest: first input pointer
 * @src: second input pointer
 *
 * Return: a pointer to the destination string @dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, dest_len = 0;

	while (dest[i++])
		dest_len++;

	for (i = 0; src[i]; i++)
		dest[dest_len++] = src[i];

	return (dest);
}
