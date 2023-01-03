#include "main.h"

/**
 * _strpbrk - a function that searches for any of  a set of bytes
 * @s: pointer for the string in the function
 * @accept: matches one of the byte of the string
 *
 * Return: a pointer to the byte
 */
char *_strpbrk(char *s, char *accept);
{
        int i;

        while (*s)
        {
                for (i = 0; accept[i]; i++)
                {
                        if (*s == accept[i])
                                return (s);
                }
                s++;
        }

        return (NULL);
}
