#include "holberton.h"
#include <stdio.h>
int _print_rev_recursion(char *s, int count);
/**
 * printrot13 - prints a string using rot13.
 *
 * @str: given string to convert
 * Return: number of elements printed
 */
int printrev(va_list str)
{
	int count = 0;
	int a = 0;
	char *nu = "(null)";
	char *string = va_arg(str, char*);

	if (!string)
	{
		for ( ; *(nu + a) ; a++)
			_putchar(nu[a]);
		return (a);
	}
	count = _print_rev_recursion(string, count);
	return (count);
}
/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: pointed string to reverse
 *
 */
int _print_rev_recursion(char *s, int count)
{
	if (*s != '\0')
	{
		count++;
		_print_rev_recursion((s + 1), count);
		_putchar(*s);
	}
	return(count);
}
