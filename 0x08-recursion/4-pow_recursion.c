#include "main.h"

/**
 * _pow_recursion - Evaluates x raised to the power of y
 * @x: input one
 * @y: input two
 * Return: -1 for y < 0, 0 if y == 0 
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
