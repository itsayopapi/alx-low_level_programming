#include<stdio.h>

/**
 * main - program entry
 *
 * Description: all alapgabets except q and e
 *
 * Return: 0 always
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
			++ch;
		putchar(ch);
		++ch;
	}
	putchar('\n');
	return (0);
}
