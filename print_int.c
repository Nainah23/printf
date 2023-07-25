#include "main.h"
/**
 * print_int - prints an integer and returns the number of bytes printed
 * @n: the integer to print
 * Return: the number of bytes printed. Includes any negative sign.
 */
int print_int(int n)
{
	print_int_helper(n);
	return (nprints_int(n));
}
