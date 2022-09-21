#include "main.h"

/**
 * puts2 - prints only one character out of two
 * begins with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
		else
			continue;
	}
	_putchar('\n');
}
