#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

/*_printf*/
int _printf(const char *format, ...);

/*_putchar.c function*/
int _putchar(char c);

/* print_function.c */
int print_str(va_list list);
int print_int(va_list list);
int print_binary(va_list list);
int print_rev(va_list list);

#endif
