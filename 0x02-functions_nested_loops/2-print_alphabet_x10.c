#include "main.h"

/**
 * print_alphabet_x10 - print x10 the alphabets
 *
 * Return: Always 0
 *
 */

void print_alphabet_x10(void)
{
	char n;
	int i=0;

	while(i<=9)
	{
		for (n = 'a'; n <= 'z' ; n++)
		{
		_putchar(n);
		}

		_putchar('\n');

		i++;
	}
}
