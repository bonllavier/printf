#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include "holberton.h"
/**
 * _printf - produces output according to a format.
 * @format: Original string to print
 * Return: an integer according to the length
 * of the original string
 */
int _printf(const char *format, ...)
{
	va_list arguments;
	unsigned int i = 0, b = 0, c = 0, f = 0;
	char id, letter[] = {'c', 's', 'd', 'i', 'b', 'R', 'r'};

	va_start(arguments, format);
	if (format == NULL || (i == 0 && format[i] == '%' && !format[i + 1]))
		return (-1);
	for (i = 0; format[i] && format != NULL ; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				_putchar(format[i + 1]);
				i += 1;
			}
			else if (format[i + 1] != '%')
			{
				b = 0, f = 0;
				for ( ; b < 7 ; b++)
				{
					if (format[i + 1] == letter[b])
					{
						id = format[i + 1];
						c += (*get_op_func(&id))(arguments) - 2;
						i += 1;
						f = 1;
					}
					else if (format[i + 1] != letter[b] && f == 0 && b == 6)
						_putchar(format[i]);
				}
			}
			else
				_putchar(format[i]);
		}
		else
			_putchar(format[i]);
	}
	va_end(arguments);
	return (i + c);
}
