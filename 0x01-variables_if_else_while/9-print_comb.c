#include<stdio.h>

/**
 * main - Short description, single line
 * @void: Description of parameter x
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: returns zero value
 */
int main(void)
{
	int a;

	for (a = 0; a <= 8; a++)
	{
		putchar((a) + '0');
		putchar(',');
		putchar(' ');
	}
	putchar((9) + ' ' + '0');
	return (0);
}
