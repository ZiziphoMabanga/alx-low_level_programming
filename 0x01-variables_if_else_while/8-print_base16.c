#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main -  prints all the numbers of base 16 in lowercase
 * Return: Always 0
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}

	putchar('\n');
	return (0);
}
