#include "main.h"

/**
 * factorial -  factorial of a given number
 * @n: number to be returned
 * Return: -1 if n < 0 else the factorial of n
 */

int factorial(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	else if (n == 0)
	{
	return (1);
	}
	else
	{
	return (n * factorial(n - 1));
	}
}
