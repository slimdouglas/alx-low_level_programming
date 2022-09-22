#include "main.h"

/**
 * *_strcat - concats two strings
 * @dest: string 1
 * @src: string two
 * Return: zero
 */

char *_strcat(char *dest, char *src)
{
	char str3[100];
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		str3[j] = dest[i];
		i++;
		j++;
	}

	i = 0;
	while (src[i] != '\0')
	{
		str3[j] = src[i];
		i++;
		j++;
	}
	str3[j] = '\0';
}
