#include "main.h"

/**
 * print_to_98 - print n to 98 counts
(*@n : input for system
 * Description:none)?
(* section header:)*
 * Return: values upto 98
 */
void print_to_98(int n)
{
	int cnt;

	if (n > 98)
	{
		for (cnt = n; cnt > 98; --cnt)
		{
			printf("%d, ", cnt);
		}
	}
		else
		{
			for (cnt = n; cnt < 98; ++cnt)
			{
				printf("%d, ", cnt);
			}
		}
		printf("98\n");
}


