#include "main.h"

/**
 * _strlen_recursion - note: funcxn that returns the length of a str
 * @s: the str
 * Return: tthe str length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
