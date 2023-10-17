#include "main.h"
#include <unistd.h>
/**
 * print_char - print char
 * @args: argument.
 * Return: counter
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);
	put_things(c);
	return (1);
}
