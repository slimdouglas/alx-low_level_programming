#include<stdio.h>
#include "main.h"

/**
 * main - intitializer
 * @argc: count of arguments
 * @argv: pointer to arguments
 * Return: zero
 */
int main(int argc, char *argv[])
{
	int i = 0;

	printf("%d\n", argc);
	if (argc > 100)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
