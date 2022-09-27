#include "main.h"
#include <stdio>

/**
 * _strchr - locates a char in a string.
 * @s: the string
 * @c: the character
 * Return:  a pointer to the first occurr of the char c in the strng, or NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s[i]);
	}

	return (NULL);
}
