#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print the value of n status: greater than, is zero and is not less than 6.
 * Return: Always 0 (Success)
 */
int main(void)


{

	int n;
	int l

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	l = n % 10;

	if (l > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, l);
	}
	else if (l == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, l);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
	}

	return (0);

}
