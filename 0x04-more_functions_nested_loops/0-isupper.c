#include "main.h"

/**
 * _isupper - uppercase letters
 * @c: char to check
 *
 * Return: 0 or 1
 */
int _isupper(int c)
{
	char uppercase = 'A';
	int isupper = 0;

	for(uppercase = 'A'; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			isupper = 1;
			break;
		}
	}
	return (isupper);
}
