#include "main.h"

/**
 * _strcmp - a function that compares two strings
 *
 * @s1: input for first pointer value
 * @s2: input for second pointer value
 *
 * Return: if s1 < s2, the negative difference of the first unmatched char
 * if s1 == s2, 0
 * if s1 > s2, the positive difference of the first unmatched char
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
