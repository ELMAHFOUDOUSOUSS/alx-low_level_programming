#include<stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number, index;

	for (number = 0; number <= 8; number++)
	{
		for (index = 1; index <= 9; index++)
		{
			if (index > number)
			{
				putchar(number);
				putchar(index);
				if (number != 8 || index != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
