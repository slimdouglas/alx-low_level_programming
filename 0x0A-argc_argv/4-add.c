#include "main.h"
#include<stdio.h>
#include<stdlib.h>
#include <ctype.h>

/**
 * main - initializer
 * @argc: counter
 * @argv: array of arguments
 * Return: zero`
 */
int main(int argc, char *argv[])
{
	int i, p, sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc ; i++)
		{
			p = atoi(argv[i]);
			if (!isdigit(p))
			{
				sum += atoi(argv[i]);
			}
			else
			{
			/*argv_2 = strtol(argv[i], NULL, 10);*/
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
