#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include "holberton.h"
/**
 *_putchar - print a character
 *@c: char
 *Return: ascci character
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 *printchar - execute the print
 *@str: va_list object
 *Return: a pointer to the correct function
 */
int printchar(va_list str)
{
	_putchar(va_arg(str, int));
	return (1);
}
/**
 *printstring - print string
 *@str: string
 *Return: a pointer to the correct function
 */
int printstring(va_list str)
{
	int a = 0;
	char *string = va_arg(str, char*);

	for (a = 0 ;  string[a] ; a++)
		_putchar(string[a]);
	return (a);
}
/**
 *printdigit - print number
 *@str: string
 *Return: a pointer to the correct function
 */
int printdigit(va_list str)
{
	int n = va_arg(str, int);
	int digitcount = n;
	int digitprint = n;
	int k = 1;
	int i = 0;
	int residuo, z;
	int div;
	int digit;

	while (digitcount != 0)
	{
		digitcount = (digitcount - (digitcount % 10)) / 10;
		k = k * 10;
		i++;
	}
	div = k;
	z = i;
	if (i == 0)
		_putchar('0');
	if (n < 0)
		digitprint = -n;
	while (z > 0)
	{
		div /= 10;
		residuo = digitprint % div;
		digit = (digitprint - residuo) / div;
		digitprint = residuo;
		if (n < 0 && z == i)
			_putchar('-');
		_putchar(digit + '0');
		z--;
	}
	return (0);
}
