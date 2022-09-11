#include<stdio.h>
#include<time.h>
#include<stdlib.h>

/**
 * main - program entry
 *
 * Description: program prints all single digit numbers
 *
 * Return: 0 always
 */

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		printf("%i", digit);
		++digit;
	}
	printf("\n");

	return (0);
}
