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
		i = atoi(argv[1]) * atoi(argv[2]);
		printf("%d", i);
	}
	else
	{
		return (1);
	}
	return (0);
}
