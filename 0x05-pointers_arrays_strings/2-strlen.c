#include "main.h"
#include <stdio.h>
/**
 * _strlen - returns string count
 * @s: character s
 *
 * Return: lengths of string
 */

int _strlen(char *s)
{
	int count;

	for (count = 0; s[count] != '\0'; ++count);

	return (count);
}
