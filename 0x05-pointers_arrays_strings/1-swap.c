#include "main.h"

/**
 * swap_int - swaps values of integers
 * @a: int a
 * @b: int b
 */

void swap_int(int *a, int *b)
{

	int p;

	p = *b;
	*b = *a;
	*a = p;
}
