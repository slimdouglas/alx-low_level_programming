#include "main.h"
#include<stdlib.h>

/**
 * create_array - creates array with given char
 * @size: array
 * @c: character
 * Return: zero and 1;
 */
char *create_array(unsigned int size, char c)
{
	char *s;

	s = malloc(sizeof(c) * size);
	if (s == NULL)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}
	return (0);
}
