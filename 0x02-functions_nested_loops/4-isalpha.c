#include "main.h"
/**
 * _isalpha - checks for alphabet
 * @c: charater to be checked
 *
 * Return: 1 if charater is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
