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

/********functions.c*************/

int print_int(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_string(va_list types, char buffer[],int flags, int width, int precision, int size);
int print_percent(va_list types, char buffer[],int flags, int width, int precision, int size);

/*************functions1.c***************/

int print_int(va_list types, char buffer[],int flags, int width, int precision, int size);
int print_binary(va_list types, char buffer[],int flags, int width, int precision, int size);
int print_unsigned(va_list types, char buffer[],int flags, int width, int precision, int size);
int print_octal(va_list types, char buffer[],int flags, int width, int precision, int size);
int print_hexadecimal(va_list types, char buffer[],int flags, int width, int precision, int size);
int print_hexaupper(va_list types, char buffer[],int flags, int width, int precision, int size);
int print_hexa(va_list types, char map_to[],char buffer[], int flags, char flag_ch, int width, int precision, int size);

/*Funntion to print memory address*/
int print_pointer(va_list types, char buffer[],int flags, int width, int precision, int size);


/*Function to print string in reverse*/
int print_reverse(va_list types, char buffer[],int flags, int width, int precision, int size);

/*Function to print a string in rot 13*/
int print_rot13(va_list types, char buffer[],int flags, int width, int precision, int size);

/*Write functions */
int handle_write_char(char c, char buffer[],int flags, int width, int precision, int size);
int write_number(int is_positive, int ind, char buffer[],int flags, int width, int precision, int size);
int write_num(int ind, char bff[], int flags, int width, int precision,int length, char padd, char extra_c);
int write_pointer(char buffer[], int ind, int length,int width, int flags, char padd, char extra_c, int padd_start);
int write_unsgnd(int is_negative, int ind,char buffer[],int flags, int width, int precision, int size);

/*Function for non custom conversion specifiers*/
int _flags(const char *format, int *i);
int _width(const char *format, int *i, va_list list);
int _precision(const char *format, int *i, va_list list);
int _size(const char *format, int *i);

#endif
