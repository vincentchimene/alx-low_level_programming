#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: type const unsigned long int
 * Return: binary number
 */
void print_binary(unsigned long int n)
{
	int i = 0, c, m, temp;

	if (n == 0)
	{
		printf("0");
		return;
	}

	temp = n;

	while (temp != 0)
	{
		i++;
		temp = temp >> 1;
	}

	for (c = i - 1; c >= 0; c--)
	{
		m = n >> c;
		if (m & 1)
			printf("1");
		else
			printf("0");
	}
}
