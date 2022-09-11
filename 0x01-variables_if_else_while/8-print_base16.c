#include<stdio.h>

/**
 * main - program entry
 *
 * Description: print numbers with base16 in lowercase
 *
 * Return: 0 always
 */
int main(void)
{
	int digit = 48;

	while (digit <= 102)
	{
		putchar(digit);

		if (digit == 57)
			digit += 39;
		++digit;
	}
	putchar('\n');

	return (0);
}
