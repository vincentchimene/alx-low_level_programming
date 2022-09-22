#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: destination (string1)
 * @src: source(string to add)
 *
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		continue;
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
