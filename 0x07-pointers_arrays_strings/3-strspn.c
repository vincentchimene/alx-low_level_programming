#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: main string to be scanned.
 * @accept: string containing the list of characters to match in s
 * Return: no. of matched byte
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count, flag;

	count = 0;

	for (i = 0; accept[i] != '\0'; i++)
	{
		flag = 0;
		for (j = 0; s[j] != '\0'; j++)
		{
			if (accept[i] == s[j])
				count++;
				flag = 1;
		}
		if (flag == 0)
			return (count);
	}
	return (0);
}
