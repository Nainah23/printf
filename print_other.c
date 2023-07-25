#include "main.h"
/**
 * print_other - prints % for %%
 * @ch: char
 * Return: nbytes
 */
int print_other(char ch)
{
	if (ch == ' ')
		return (-1);

	_putchar('%');
	_putchar(ch);

	return (2);
}
