#include "main.h"
/**
 *This program prints alphabet in lower case using _putchar
 * Return: 0
 */
void print_alphabet(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
}
