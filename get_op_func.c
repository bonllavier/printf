#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "holberton.h"
/**
 *get_op_func - selects the correct function to be performed
 *@s: string
 *Return: a pointer to the correct function
 */
int (*get_op_func(char *s))(va_list str)
{
	int i = 0;
	op_t ops[] = {
		{"c", printchar},
		{"s", printstring},
		{"d", printdigit},
		{"i", printdigit},
		{"b", print_binary},
		{"R", printrot13},
		{NULL, NULL}
	};
	while (i < 6)
	{
		if (*s == *ops[i].op)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
