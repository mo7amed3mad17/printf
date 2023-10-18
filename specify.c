#include "main.h"

/**
 * specify - function to specify.
 * @con_spec: Conversion specifiers.
 * @args: arguments.
 * Return: int
 */

int specify(char con_spec, va_list args)
{
	int i = 0;
	int counter = 0;

	specify_s spec[] = {
		{'c', print_char},
		{'s', print_str},
		{'%', print_percent},
		{'d', print_digit},
		{'i', print_digit},
		{'r', print_rev},
		{0, NULL}
	};

	while (spec[i].specifiers)
	{
		if (con_spec == spec[i].specifiers)
			counter += spec[i].f(args);
		i++;
	}

	if (counter == 0)
	{
		counter += put_things('%');
		counter += put_things(con_spec);
	}

	return (counter);
}
