#include "main.h"

/**
 * get_the_function - get the function specifiers
 * @con_specification: specifer the conversion
 * @args: arguments
 *
 * Return: return 0
 */

int get_the_function(char con_specification, va_list args)
{
	int i = 0, int_couter = 0;

	specifiers_t spek[] = {
		{'c', print_character},
		{'s', print_string},
		{'%', print_module},
		{'d', print_digits},
		{'i', print_digits},
		{'r', print_reverse_string},
		{0, NULL}
	};

	while (spek[i].specifiers)
	{
		if (con_specification == spek[i].specifiers)
			int_counter += spek[i].f(args);
		i++;
	}

	if (int_counter == 0)
	{
		int_counter += print_things('%');
		int_counter += print_things(con_specification);
	}

	return (int_counter);
}
