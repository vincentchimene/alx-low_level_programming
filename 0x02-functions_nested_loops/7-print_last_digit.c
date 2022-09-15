#include "main.h"
/**
 * print_last_digit - print the last digit of a num
 * return: the last digit
 * @n: int data type
 * Return: c
 */
int print_last_digit(int n)
{
	int c = n % 10;

	if (n > 0)
	{
	_putchar(c + '0')
	return (c);
	}
	else
	{
		_putchar(c + '0')
		return (c * -1);
	}
}
