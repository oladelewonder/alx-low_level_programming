#include <stdio>
/**
 * main - print the alpha in lowercase followed by a new line except q and e
 * Return: Always 0
 */
int main(void)
{
	char lc;

	for (la = 'a'; la <= 'z'; la++)
	{
		if (la != 'e' && la != 'q')
			putchar(la);
	}

	putchar('\n');

	return (0);
}
