#include "main.h"
/**
 * print_int_helper - actually prints the integer using recursion
 * @n: the integer to print
 * Return: 0, always
 */
int print_int_helper(int n)
{
	unsigned int m;

	if (n < 0)
	{
		m = -1 * (unsigned int)(n + 1) + 1;
		n = -1;
		_putchar('-');
	}
	else
	{
		m = n;
	}

	if (m / 10)
		print_int_helper(m / 10);

	_putchar(m % 10 + '0');
	return (0);
}
