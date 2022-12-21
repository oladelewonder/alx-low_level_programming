#include "main.h"

/**
 * *_strncat - a function that concatenates two strings ftom the src to dest
 *
 * @dest: pointer to the first string input
 * @src: pointer to the second string input
 * @n: input for integer value
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, dest_len = 0;

	while (dest[i++])
		dest_len++;

	for (i = 0; src[i] && i < n; i++)
		dest[dest_len++] = src[i];

	return (dest);
}
