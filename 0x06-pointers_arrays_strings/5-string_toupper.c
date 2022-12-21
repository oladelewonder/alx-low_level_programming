#include "main.h"

/**
 * *string_toupper - a function that change all lowercase letter
 * of a string to upper case
 *
 * @str: the string to be changed
 *
 * Return: string with uppercase letters
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;

		i++;
	}

	return (str);
}
