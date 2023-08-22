#include "main.h"

/**
 * _strcmp - a function that compares two strings
 * @s1: string one
 * @s2: string two
 * Return: 0 for Success, none 0 for different strings
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}
