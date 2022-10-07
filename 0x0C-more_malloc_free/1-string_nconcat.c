#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int i, j, l1, l2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
	{
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
	}

	if (n < j)
		j = n;

	j += i;
	a = malloc(sizeof(char *) * (j + 1));

	if (a == NULL)
		return (NULL);

	for (l1 = 0; l1 < i; l1++)
		a[l1] = s1[l1];
	for (l2 = 0; l1 < j; l2++)
	{
		a[l1] = s2[l2];
		l1++;
	}
	l1++;
	a[l1] = '\0';
	return (a);
}
