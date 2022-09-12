#include<stdio.h>

/**
 * main - Short description, single line
 * @void: Description of parameter x
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: Returns no value
 */


int main(void)
{
	char ny = 'a';

	while (ny <= 'z')
	{
		while (ny != 'e' && ny != 'q')
		{
		putchar(ny);
		ny++;
		}
	}
	putchar('\n');
	return (0);
}
