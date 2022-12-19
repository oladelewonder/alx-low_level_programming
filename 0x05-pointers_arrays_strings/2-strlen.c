#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: the variable for the string
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
