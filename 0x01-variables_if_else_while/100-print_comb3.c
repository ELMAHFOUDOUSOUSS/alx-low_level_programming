#include<stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number, index;

	for (number = 48; number <= 56; number++)
	{
		for (index = 49; index <= 57; index++)
		{
			if (index > number)
			{
				putchar(number);
				putchar(index);
				if (number !=56 || index != 57)
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
