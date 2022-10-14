#include "variadic_function.h"

/**
 * sum_them_all - function to calculates the sum of all its parameters
 * @n: number of arguments passed to the function
 *
 * Return: the resulting sum, 0 If n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list list;

	if (n == 0)
		return (0);

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, int);
	}

	va_end(list);

	return (sum);
}
