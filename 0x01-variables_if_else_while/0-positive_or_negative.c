#include<stdlib.h>
#include<time.h>
#include<stdio.h>

/**
 *  * main- program entry
 *   *
 *    * Description: to print n and see if value is positive or negetive
 *     *
 *      * Return: always 0
 */
int main(void)
{
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;

					/*code*/
					if (n > 0)
								printf("%i is positive\n", n);
						else if (n == 0)
									printf("%i is zero\n", n);
							else
										printf("%i is negative\n", n);
								return (0);
}
