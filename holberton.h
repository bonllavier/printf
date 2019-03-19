#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#include <stdarg.h>
int _putchar(char c);
int printchar(va_list str);
int printstring(va_list str);
int printdigit(va_list str);
int (*get_op_func(char *s))(va_list str);
int _printf(const char *format, ...);
/**
 *struct op - structure
 *@op: character
 *@f: function name
 *Description - selector for the proper operation.
 */
typedef struct op
{
char *op;
int (*f)(va_list str);
} op_t;
#endif
