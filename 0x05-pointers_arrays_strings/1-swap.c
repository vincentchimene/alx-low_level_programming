#include <main.h>
/*
 * swap_int - swaps the values of two integers
 * @a: 1st integer
 * @b: 2nd integer
 * Return: none
 */
void swap_int(int *a, int *b)
{
	int c = *a; /*c is a variable to help in the swap process*/
	*a = *b;
	*b = c;
}
