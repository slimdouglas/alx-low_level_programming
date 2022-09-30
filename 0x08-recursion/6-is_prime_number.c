#include "main.h"

/**
 * is_prime_number - checks if value is prime
 * @n: input number
 * @i: input num
 * Return: 1 if prime 0 if not
 */
int is_prime_number(int n)
{
	int i = n/2;

	if (n == i || n <= 0)
	{
		return (0);
	}
	if (n % i == 0)
	{
		return (1);
	}
	else
	{
		i = i - 1;
		is_prime_number(n);
	}
}
