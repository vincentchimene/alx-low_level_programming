#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: main string to be scanned.
 * @accept: string containing the list of characters to match in s
 * Return: no. of matched byte
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, value, count;

	count = 0;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (accept[i] == s[j])
				count++;
		}
	}
	return (count);
}
