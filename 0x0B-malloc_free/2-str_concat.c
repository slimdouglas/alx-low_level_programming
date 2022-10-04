#include "main.h"
#include<stdlib.h>
#include<string.h>

/**
 * str_concat - concats two strings
 * @s1: string 1
 * @s2: string 2
 * Return: zero if success Null if fail
 */
char *str_concat(char *s1, char *s2)
{
	/**char *s, *p;
	*s = &p;
	*p = strncat(s1, s2);
	*s = malloc(sizeof(s1) + sizeof(s2));
	*return(p);
	*/
	int length, j;
	char *s;

	malloc(sizeof(s1) + sizeof(s2));
	length = 0;
	while (s1[length] != '\0')
	{
		++length;
	}
	/* concatenate s2 to s1*/
	for (j = 0; s2[j] != '\0'; ++j, ++length)
	{
		s1[length] = s2[j];
	}
	/* terminating the s1 string*/
	s1[length] = '\0';
	puts(s1);
	s = &s1[length];
	return (s);
	if ( s == NULL)
	{
		return (NULL);
	}
	return (0);
}
