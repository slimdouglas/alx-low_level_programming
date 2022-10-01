#include<stdio.h>
#include "main.h"

/**
 * main - intitializer
 * @argc: counts number of variables
 * @argv: pointer to array of strings
 * Return: zero if success
 */
int main(int argc, char* argv[])
{
	int i = 0;

	if (argc > 0)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
