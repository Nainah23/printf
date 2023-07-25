#include "main.h"
#include <stddef.h>
/**
 * _puts - prints a string, prints (null) for NULL str
 * @str: the string to print
 * Return: the number of bytes printed
 */
int _puts(char *str)
{
	int i = 0;

	if (str == NULL)
		str = "(null)";

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	return (i);
}
