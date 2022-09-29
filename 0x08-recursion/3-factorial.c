#include "main.h"
/**
 * factorial - returns factorial of n
 * @n: input of number
 * Return: returns factorial
 */
int factorial(int n)
{
	if (n <= 1)
	{
		return 1;
	}
	return n * factorial(n - 1);
}
