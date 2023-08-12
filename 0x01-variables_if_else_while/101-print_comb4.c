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
		for (ma = 49; ma <= 56; ma++)
		{
			for (j = 50; j <= 57; j++)
			{
				if (j > ma && ma > n)
				{
					putchar(n);
					putchar(ma);
					putchar(j);
					if (n != 55 || ma != 56)
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
