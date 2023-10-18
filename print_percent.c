#include "main.h"
#include <unistd.h>

/**
 * print_percent - print %.
 *
 * @args: arguments.
 *
 * Return: count of chars.
 */

int print_percent(va_list args)
{
	(void)args;

	put_things('%');

	return (1);
}
