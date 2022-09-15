#include"main.h"

/**
 * main- Starting point of code
 * @void: means no output
(*
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: multiples of 3 and 5
 */
int main(void)
{
	int sum, num;

	for (num = 0; num < 1024; ++num)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
			sum += num;
	}
	printf("%d\n", sum);

	return (0);
}
