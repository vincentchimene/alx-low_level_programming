#include "main.h"
/**
 * leet - encodes a string in 1337
 * @s: string to be encoded
 *
 * Return: the resulting string;
 */
char *leet(char *s)
{
	int i, j;
	int low[] = {'a', 'e', 'o', 't', 'l'};
	int upp[] = {'A', 'E', 'O', 'T', 'L'};
	int num[] = {'4', '3', '0', '7', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == low[j] || s[i] == upp[j])
			{
				s[i] = num[j];
				break;
			}
		}
	}
	return (s);
}
