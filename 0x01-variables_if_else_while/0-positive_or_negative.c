#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* more headers goes there */



/* betty style doc for function main goes there */
/**
 * main - This function identifies numbers status */
int main(void)

{

		int n;



			srand(time(0));

				n = rand() - RAND_MAX / 2;
/**
 * your code goes there
 *printf returns value if posit
 * */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);

}
/**
 * This function identifies whether the
 *  number input is positive negative or zero
 */
