#include "main.h"

/**
 * print_last_digit - prints the last digit
 * of a number.
 *
 * @n: input number as an integer.
 *
 * Return: last digit.
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
		_putchar(-last + '0');
		return (-last);
	}
	else
	{
		_putchar(last + '0');
		return (last);
	}
}
