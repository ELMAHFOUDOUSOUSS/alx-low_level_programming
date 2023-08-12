#include<stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, ma, j;

	for (n = 48; n <=55; n++)
	{
		for (m = 49; m <= 56; m++)
		{
			for (j = 50; j <= 57; j++)
			{
				if (j > m && m > n)
				{
					putchar(n);
					putchar(m);
					putchar(j);
					if (n != 55 || m != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
