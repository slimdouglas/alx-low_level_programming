#include<stdio.h>
#include "main.h"
#include<stdlib.h>
/**
 * main - starting point of code
 * @argc: count of args
 * @argv: pointer to array
 * Return: returns 1 if fails 0 success
 */
int main(int argc, char *argv[])
{
	int i, p, q;

	if (argc == 3)
	{
		p = atoi(argv[1]);
		q = atoi(argv[2]);
		i = p * q;
		/*i = strtol(argv[1], &p, 10) * strtol(argv[2], &p, 10);*/
		printf("%d", i);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
