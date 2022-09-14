#include<string.h>
#include "main.h"

/**
 * main - Starting point, of code
 * @void: Means no value returned
(* a blank line
 * Description: Prints a string)?
(* section header: includes standard lib)*
 * Return: Returns zero value;
 */
int main(void)
{
	char str[] = "_putchar";
	int ny;

	for (ny = 0; ny < 8; ++ny)
	{
		putchar(str[ny]);
	}
		putchar('\n');
	return (0);
}
