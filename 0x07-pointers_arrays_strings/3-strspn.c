#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: main string to be scanned.
 * @accept: string containing the list of characters to match in s
 * Return: no. of matched byte
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, n, count, check;

	count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		check = 0;

		for (n = 0; accept[n] != '\0'; n++)
		{
			if (accept[n] == s[i])
			{
				count++;
				check = 1;
			}
		}

		if (check == 0)
			return (count);
	}

	return (count);
}
