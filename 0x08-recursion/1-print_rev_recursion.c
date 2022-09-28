#include "main.h"
#include <string.h> 
/**
 * _print_rev_recusrion - prints in reverse
 * @s: string
 *
 */
void _print_rev_recursion(char *s)
{
	 int i, len, temp;

	 len = strlen(s);
	if (i < len/2)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
		i++;
		_print_rev_recursion(s);
	}
}
