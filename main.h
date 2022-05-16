#ifndef PRINTF_H
#define PRINTF_H

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct format - matches the conversion specifiers for printf 
 * @id: type char pointer of the specifier
 * @f: type pointer to function for the conversion specifier
 * 
 */

typedef struct format
{
    char *id;
    int (*f)();
} convert_match;

int _printf(const char *format, ...);