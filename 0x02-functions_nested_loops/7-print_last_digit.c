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
	return (c);
	}
	else
		return (c * -1);
}
