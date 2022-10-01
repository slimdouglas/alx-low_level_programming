#include<stdio.h>
#include "main.h"

/**
 * main - initializer
 * @argc: count arguments
 * @argv: pointer to array of args
 * Return: returns zero for success
 */
int main(int argc, char* argv[])
{
	int i;
	
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
