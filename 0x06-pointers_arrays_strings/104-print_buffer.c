#include "main.h"
#include <stdio.h>

/**
 * print_buffer - print a buffer 10 bytes at a time, starting with
 * 		  the byte position, then showing the hex content,
 * 		  then displaying printable charaters
 *
 * @b: the buffer to be printed
 * @size: the number of bytes to be printed from the buffer
 */
void print_buffer(char *b, int size)
{
	int byte, i;

	for (byte = 0; byte < size; byte += 10)
	{
		printf("%08x: ", byte);

		for (i = 0; i < 10; i++)
		{
			if ((i + byte) >= size)
				printf(" ");
			else
				printf("%02x", *(b + i + byte));

			if ((i % 2) != 0 && i != 0)
				printf(" ");
		}

		for (i = 0; i < 10; i++)
		{
			if ((i + byte) >= size)
				break;

			else if (*(b + i + byte) >= 31 && *(b + i + byte) <= 126)
				printf("%c", *(b + i + byte));

			else
				printf(".");
		}

		if (byte >= size)
			continue;

		printf("\n");
	}

	if (size <= 0)
		printf("\n");
}
