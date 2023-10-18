#include "main.h"
#include <unistd.h>
#include <stdarg.h>
/**
 * print_str - print string.
 * @args: argument.
 * Return: counter.
 */

int print_str(va_list args)
{
	int i;
	int counter = 0;
	char *str = va_arg(args, char *);

	if (!str)
		str = "(null)";

	if (str[0] == '\0')
		return (-1);

	for (i = 0; str[i] != '\0'; i++)
		counter += put_things(str[i]);

	return (counter);
}
