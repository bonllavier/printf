#include "holberton.h"
#include <stdio.h>
int _print_rev_recursion(char *s, int);
/**
 * printrev - prints a string in reverse.
 *
 * @str: given string to convert
 * Return: number of elements printed
 */
int printrev(va_list str)
{
	int count = 0, control = 0;
	int a = 0;
	char *nu = "(null)";
	char *string = va_arg(str, char*);

	if (!string)
	{
		for ( ; *(nu + a) ; a++)
			_putchar(nu[a]);
		return (a);
	}
	count = _print_rev_recursion(string, control);
	return (count);
}
/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: pointed string to reverse
 * @count: number characters
 * Return: number of chars printed
 */
int _print_rev_recursion(char *s, int control)
{
	while (*s != '\0')
	{
		s++;
	}
	s--;
	while (*s != '\0')
	{
		_putchar(*s);
		control++;
		s--;
	}
	return (control);
}
