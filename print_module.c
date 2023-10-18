#include "main.h"
#include <unistd.h>

/**
 * print_module - print %.
 *
 * @argument: arguments.
 *
 * Return: count of chars.
 */

int print_module(va_list argument)
{
	(void)argument;
	
	put_things('%');
	
	I	return (1);
}
