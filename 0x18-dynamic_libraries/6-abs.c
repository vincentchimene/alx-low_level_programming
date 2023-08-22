#include "main.h"
/**
 * _abs - computed the absolute value of a number
 * @n: - type int integer, negative or positive
 * Description: print +, 0, or - depending on number
 * Return: the absolute value
 */
int _abs(int n)
{

	if (n >= 0)
		return (n);
	else
		return (n * -1);
}
