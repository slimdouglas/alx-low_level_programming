#include "main.h"
#include<stdlib.h>

/**
 * _strdup - returns pointer to duplicate string
 * @str: pointer to string
 * Return: retunr NULL if  null and O if success
 */

char *_strdup(char *str)
{
	str = malloc(sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}

	free(str);
	return (0);
}
