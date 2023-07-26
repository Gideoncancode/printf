#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024

/* Flags*/
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

/* Sizes */
#define S_LONG 2
#define S_SHORT 1

int _printf(const char *format, ...);

/********function.c*************/

int print_int(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_string(va_list types, char buffer[],int flags, int width, int precision, int size);
int print_percent(va_list types, char buffer[],int flags, int width, int precision, int size);

/*************function1.c***************/

int print_int(va_list types, char buffer[],int flags, int width, int precision, int size);
int print_binary(va_list types, char buffer[],int flags, int width, int precision, int size);
int print_unsigned(va_list types, char buffer[],int flags, int width, int precision, int size);
int print_octal(va_list types, char buffer[],int flags, int width, int precision, int size);
int print_hexadecimal(va_list types, char buffer[],int flags, int width, int precision, int size);
int print_hexa_upper(va_list types, char buffer[],int flags, int width, int precision, int size);
int print_hexa(va_list types, char map_to[],char buffer[], int flags, char flag_ch, int width, int precision, int size);

/************function2****************/
int print_pointer(va_list types, char buffer[],int flags, int width, int precision, int size);
int print_reverse(va_list types, char buffer[],int flags, int width, int precision, int size);
int print_rot13string(va_list types, char buffer[],int flags, int width, int precision, int size);

/*Function for non custom conversion specifiers*/
int get_flags(const char *format, int *i);
int get_width(const char *format, int *i, va_list list);
int get_precision(const char *format, int *i, va_list list);
int get_size(const char *format, int *i);

#endif
