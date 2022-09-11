#include<stdio.h>

/**
 * main - program entry
 *
 * Description: program prints both uppercase and lowercase
 *
 * Return: 0 always
 */
int main(void)
{
	char ch = 'a';
	char CH = 'A';

	/*prints lowercase*/
	while (ch <= 'z')
	{
		putchar(ch);
		++ch;
	}

	/*prints uppercase*/
	while (CH <= 'Z')
	{
		putchar(CH);
		++CH;
	}
	putchar('\n');
	return (0);
} 
