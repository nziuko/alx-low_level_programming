#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: write a program that prints all possible
 * different combintions of the two digits
 * Numbers ust be seperated by ,, followed by a space
 * The two digits must be different
 * 01 ans 10 are considered the same combination of two digits
 * Numbers should be printed in ascending order,with two digits
 * You can only use the putcher function
 * (every other function (printf, puts, etc...) is forbidden)
 * You can only use putchar five times maximum in your code
 * You are not allowed to use any variable of type char
 * All your code should be in the main function
 * Return: 0
 */
int main(void)
{
	int c;
	int d;
	int e = 0;

	while (e < 10)
	{
		d = 0;
		while (d < 10)
		{
			c = 0;
			while (c < 10)
			{
				if (c  !=  d && d  !=  e && e < d && d < c)
				{
					putchar('0' + e);
					putchar('0' + d);
					putchar('0' + c);
					if (c + d + e != 9 + 8 + 7)
					{
						putchar(',');
						putchar(' ');
					}

				}

				c++;
			}
			d++;
		}
		e++;
	}
	putchar('\n');
	return (0);
}
