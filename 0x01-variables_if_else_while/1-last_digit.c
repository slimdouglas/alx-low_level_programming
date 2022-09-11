#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - starting point, single line
 * @void: Returns no value
(* a blank line
 * Description: prints whether the number
 * is 0 less than 5 or 6)?
(* section header: Section description)*
 * Return: Returns null
 */
int main(void)
{
		int n, lastDigit;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
					/* your code goes there */
				lastDigit = n % 10;
	if (lastDigit > 5)
		{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
		}
	else if (lastDigit == 0)
		{
		printf("Last digit of %d is %d and is 0\n", n, lastDigit);
		}
	else if (lastDigit < 6 && lastDigit != 0)
		{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, 
			lastDigit);
		}
	else
	{
	printf("error\n");
	}
					return (0);
}
