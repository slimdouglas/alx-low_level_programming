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
			printf("Fizz ");
		}
		else if (i % 5 == 0 )
		{
			printf("Buzz ");
		}
		else if (i % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	return (0);
}

