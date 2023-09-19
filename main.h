#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct check - definition of structure
 *
 * @fmt : format specifier
 *
 * @fn : function associated
 */
struct checker
{
	char fmt;
	int (*fn)(va_list);
};
typedef struct checker

//Functions - Prototypes
int _printf(const char *format, ...);

#endif
