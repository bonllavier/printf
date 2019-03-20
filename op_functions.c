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
	char string;

	string = (char)va_arg(str, int);
	_putchar(string);
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
	char *nu = "(null)";
	char *string = va_arg(str, char*);

	if (!string)
	{
		for ( ; *(nu + a) ; a++)
			_putchar(nu[a]);
		return (a);
	}
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
	int count, num;

	count = 0;
	num = va_arg(str, int);
	count += recursive_pt(num);
	return (count);
}
/**
 * recursive_pt - recursive print
 * @num: number param.
 *
 * Return: counter.
 */
int recursive_pt(int num)
{
	int count = 0;
	unsigned int x = num;

	if (num < 0)
	{
		count += _putchar('-');
		x = -x;
	}
	if (x / 10)
		count += recursive_pt(x / 10);
	count += _putchar(x % 10 + '0');
	return (count);
}
