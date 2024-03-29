#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
/**
* File: variadic_functions.h
* Desc: header file containing prototypes for all functions
*       used int he 0X0F-variadic_functions directory.
*/
#include <stdarg.h>
/**
* struct printer - A new struct type defining a pointer.
* @symbol: A symbol representing a data type
* @print: A function pointer to a function that prints
*         a data type corresponding to symbol
*/
typedef struct printer
{
char *symbol;
void (*print)(va_list arg);
} printer_t;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif

