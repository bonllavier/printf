#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include "holberton.h"
/**
 *print_binary - print binary of a decimal number
 *@str: string
 *Return: the number of elelemnts printed
 */
int print_binary(va_list str)
{
	unsigned int num;
	int bit, bin = 0, count = 0;

	num = va_arg(str, unsigned int);
	for (bit = 31; bit >= 0; bit--)
	{
		bin = num >> bit & 1;
		if (bin == 1)
			break;
		if (bit == 0 && bin == 0)
		{
			_putchar('0');
			return (1);
		}
	}
	for (; bit >= 0; bit--)
	{
		bin = num >> bit & 1;
		_putchar(bin + '0');
		count++;
	}
	return (count);
}
