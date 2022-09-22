#include "main.h"

/**
 * string_toupper - a function that capitalizes all words of a string
 * @str: input string
 * Return: capitalised string
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}

	return (str);
}
