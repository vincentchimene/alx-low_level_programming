#include "main.h"
#include <stdio.h>

/**
 * *_strstr - this function locates a substring
 * @haystack: string to search in
 * @needle: substring to look for
 *
 * Return: pointer to the start of the located substring or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (needle[j] != '\0')
			return (&haystack[i]);
	}
	return (NULL);
}
