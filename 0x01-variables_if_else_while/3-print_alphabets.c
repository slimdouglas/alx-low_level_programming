#include<stdio.h>

/**
 * main - Starting point, single line
 * @void: Returns no value
(* 
 * Description: Prints A-Z a-z)?
(* section header: Section description)*
 * Return: no value is returned
 */

int main(void)
{
	char ny = 'a';
	char nz = 'A';
	while (ny <= 'z')
	{
		putchar(ny);
		ny++;
	}
	while (nz <= 'Z')
	{
		putchar(nz);
		nz++;
	}
	putchar('\n');
	return (0);
}
