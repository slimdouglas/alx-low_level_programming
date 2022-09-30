#include<stdio.h>
#include "main.h"
#include<stdlib.h>
/**
 * main - starting point
 * @argc: count of args
 * @argv: pointer to array
 */
int main(int argc, char* argv[])
{
	int i;

	if (argc == 3)
	{
		char *p;

		i = strtol(argv[1], &p, 10) * strtol(argv[2], &p, 10);
		printf("%d", i);
	}
	else
	{
		return (1);
	}
	return (0);
}
