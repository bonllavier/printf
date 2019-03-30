#include "holberton.h"
#include <stdio.h>
/**
 * printrot13 - prints a string using rot13.
 *
 * @str: given string to convert
 * Return: number of elements printed
 */
int printrot13(va_list str)
{
	int b = 0, count = 0, control = 0;
	int i = 0;
	char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int a = 0;
	char *nu = "(null)";
	char *string = va_arg(str, char*);

	if (!string)
	{
		for ( ; *(nu + a) ; a++)
			_putchar(nu[a]);
		return (a);
	}
	for (i = 0; string[i] != '\0'; i++)
	{
		for (b = 0; b < 52; b++)
		{
			if (string[i] == in[b])
			{
				_putchar(out[b]);
				count++;
			}
		}
		control++;
		if (control != count)
		{
			_putchar(string[i]);
			count++;
		}
	}
	return (count);
}
