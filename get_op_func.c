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
		{NULL, NULL}
	};
	while (i < 4)
	{
		if (*s == *ops[i].op)
			return (ops[i].f);
		i++;
	}
	printf("Error1\n");
	exit(99);
	return (NULL);
}
