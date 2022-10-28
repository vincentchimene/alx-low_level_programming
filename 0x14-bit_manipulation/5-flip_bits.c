#include "main.h"

/**
 * flip_bits - Returns the number of bits  needed to be flipped
 * @n: type unsigned long int input pointer
 * @m: type unsigned long int position of unit
 * Return: flipped_bit
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int c = 0;

	while (n != 0 || m != 0)
	{
		if ((n & 1) != (m & 1))
			c++;
		m = m >> 1;
		n = n >> 1;
	}

	return (c);

}
