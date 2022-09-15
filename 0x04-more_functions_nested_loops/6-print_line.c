#include "main.h"

/**
 * print_line - This function draws a straight line
 * @n: number of times underscore is printed
 * Description: Can only use _putchar to print
 */
void print_line(int n)
{
	int a;

	a = 0;
	while (a < n)
	{
		_putchar('_');

		a++;
	}
	_putchar('\n');
}
