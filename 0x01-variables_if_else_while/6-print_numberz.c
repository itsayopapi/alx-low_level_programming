#include<stdio.h>

/**
 * main - program entry
 *
 * Description: print 0-9 using putchar while using int variable
 *
 * Return: 0 always
 */
int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + '0');
		++digit;
	}
	putchar('\n');

	return (0);
}
