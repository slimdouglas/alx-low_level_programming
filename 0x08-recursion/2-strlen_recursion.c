#include "main.h"
/**
 * _strlen_recursion - returns string length
 * @s: string to be measured
 * Return: returns 1 if its zero
 */

int _strlen_recursion(char *s)
{
	int l, index;

	l = 0;
	if (s[index] == '\0')
		return 1;
	else
		l++;
	_strlen_recursion(s, index + 1);
}
