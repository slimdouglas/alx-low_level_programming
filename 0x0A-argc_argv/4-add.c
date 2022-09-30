#include "main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * main - initializer
 * @argc: counter 
 * @ argv: array of arguments
 * Return: zero`
 */
int main(int argc, char* argv[])
{
	int i, sum = 0;
	if (argc > 1)
	{
		for (i = 1; i < argc ; i++)
		{
			/*argv_2 = strtol(argv[i], NULL, 10);*/
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else
	{
		return (0);
	}
	return (0);
}
