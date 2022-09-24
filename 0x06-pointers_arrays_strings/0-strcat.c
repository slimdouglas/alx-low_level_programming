#include "main.h"
#include<stdio.h>
/**
 * *_strcat - concats two strings
 * @dest: string 1
 * @src: string two
 * Return: zero
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (j = 0; src[j] != '\0'; ++j)
	{
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i + j] = src[i];
	}
	dest[i + j] = '\0';
	return (0);
}
