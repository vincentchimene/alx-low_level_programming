#include "main.h"

/**
 * factorial - reuturns the factorial of a number
 * @n: the integer
 * Return: n!
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
