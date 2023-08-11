#include<stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
    int nbr ;


	for (nbr = 0; nbr < 10; nbr++)
	{
		putchar(nbr);
        if (nbr != 9) {
            putchar(',');
            putchar(' ');
        }
	}
	
	
	putchar('\n');
	return (0);
}
