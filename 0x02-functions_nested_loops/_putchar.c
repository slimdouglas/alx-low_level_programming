#include<unistd.h>

/**
 * _putchar - writes c to stdout
 * @c: Description of c
(* 
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: return 1 on success and -1 not
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
