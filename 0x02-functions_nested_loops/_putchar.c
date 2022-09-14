#include<unistd.h>

/**
 * main - program entry
 *
 * Description: this prints c characters to stdout
 *
 * Return: returns 1 seccess
 * -1 on error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
