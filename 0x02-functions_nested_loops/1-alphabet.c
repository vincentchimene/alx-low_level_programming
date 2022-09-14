#include "main.h"
/**
 *print_alphabet - This prints lower case using _putchar
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
