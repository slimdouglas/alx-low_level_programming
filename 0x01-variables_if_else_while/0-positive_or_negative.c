#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* more headers goes there */



/* betty style doc for function main goes there */

/**
 * main() - Short description, single line
 * @void: returns no value
(*
 * Description: this function mainly generates a random
 * number and determines whether the number
 * is zero negative or positive)?
(* section header: Section description)*
 * Return: terminates the code once executed
 */
int main(void)

{

		int n;



			srand(time(0));

				n = rand() - RAND_MAX / 2;
/*
 * your code goes there
 * printf returns value if positive
 * srand(time(0)) - calculates time
 * rand() - generates random number
 */
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
/* return(0) - Terminates the code */

}
