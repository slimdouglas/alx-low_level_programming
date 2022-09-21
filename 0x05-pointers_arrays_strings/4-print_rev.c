#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: is a string
 *
 * Return: returns no value
 */

void print_rev(char *s)
{
	int count;
	char temp;

	for (count = 0; s[count] != '\0'; ++count)
	{
	}

	int i = 0, j =0;

	j = count - 1;

	while ( i < j)
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
		i++;
		j--;
	}

}
