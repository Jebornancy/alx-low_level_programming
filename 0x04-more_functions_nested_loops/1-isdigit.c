#include <stdio.h>
#include "main.h"

/**
 * _isdigit - prints digitd
 *
 * @c: character to be checked
 * Return: returns 1 if c is digit else it returns 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
