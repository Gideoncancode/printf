#include "main.h"
#include <stdarg.h>

void print_char(va_list types, char buffer[], int flaags, int widthh, int precision, int size);
/************** PRINT CHAR ************/

/* print_char - Prints a char
 * @types: List a of arguments
 * @buffer: Buffer array to handle print
 * @flags:  Calculates active flags
 * @width: Width
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of chars to be printed
 */

int print_char(va_list types, char buffer[], int flags, int width, int precision, int size)
{
	char c = va_arg(types, int);

	return (handle_write_char(c, buffer, flags, width, precision, size))#include "main.h"
