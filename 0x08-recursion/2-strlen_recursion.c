#include "main.h"
/**
 * _strlen_recursion - returns string length
 * @s: string to be measured
 * Return: returns 1 if its zero
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s != '\0')
	{
		length++;
		_strlen_recursion(++s);
	}
	else
	{
		return (length);
	}
	return (0);
}
