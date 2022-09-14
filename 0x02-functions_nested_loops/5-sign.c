#include "main.h"
/**
 * print_sign - Print the sign of a number
 * @n: type int integer, negative or positive
 * Description: print +, 0, or - depending on number
 * Return: 1 if +, 0 if 0, and -1 if -
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
		if (n < 0)
		{
		_putchar('-');
		return (-1);
		}
		else
		{
		_putchar('+');
		return (1);
		}
}
