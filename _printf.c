#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * _printf - prints formatted output with some specifiers
 * @format: pointer to the only fixed string argument
 * Return: integer, number of bytes printed
 */
int _printf(const char *format, ...)
{
	int n_print = -1;
	va_list my_arg;

	if (format != NULL)
	{
		n_print = 0;
		va_start(my_arg, format);
		while (*format != '\0')
		{
			if (*format != '%')
				n_print += _putchar(*format);
			else
			{
				format++;
				if (*format == 'c')
					n_print += _putchar((char)va_arg(my_arg, int));
				else if (*format ==  's')
					n_print += _puts(va_arg(my_arg, char *));
				else if (*format == '%')
					n_print += _putchar('%');
				else if (*format == 'i' || *format == 'd')
					n_print += print_int(va_arg(my_arg, int));
				else
				}
					n_print = print_other(*format);
					if (n_print == -1)
						return (n_print)
				}
			}
			format++;
		}
		va_end(my_arg);
	}
	return (n_print);
}
