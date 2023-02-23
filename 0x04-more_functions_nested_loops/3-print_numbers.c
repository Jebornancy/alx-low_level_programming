#include "main.h"

/*
 * print_numbers -  prints numbers 0-9 followed by a new line
 *
 * Return: always 0
 */
void print_numbers(void)
{
	char i;

	for (i = '0'; i < '10'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
