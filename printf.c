#include "main.h"

/**
 * _printf - prints the thinsg i pass to it
 * @format: the things it will take in
 * Return: it returns the number of byte it takes
 */

int _printf(const char *format, ...)
{
	unsigned int i, string_count, byte_count = 0;

	va_list printing;

	va_start(printing, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			put_things(format[i]);
		}
		else if (format[i] == '%' && format[i + 1] == 'c')
		{
			put_things(va_arg(printing, int));
			i++;
		}
		else if (format[i + 1]  == 's')
		{
			string_count = print_string(va_arg(printing, char *));
			i++;
			byte_count += (string_count - 1);
		}
		else if (format[i + 1] == '%')
		{
			put_things('%');
		}
		byte_count++;
	}
	va_end(printing);
	return (byte_count);
}
