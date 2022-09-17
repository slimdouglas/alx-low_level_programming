#include<stdio.h>

/**
 * main - initializer, starting p
 * @void: no return value
 * Return: null
 */

int main(void)
{
	int i;

	for (i = 1; i <=100 ; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz");
		}
		if else (i % 5 == 0 )
		{
			printf("Buzz");
		}
		if else (i % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d ", i);
		}
	}
}

