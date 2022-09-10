#include<stdio.h>

/**
 * main - program entry
 *
 * Description: the program prints alphabets
 *
 * Return: 0 always
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		++ch;
	}
	putchar('\n');
	return (0);
}
