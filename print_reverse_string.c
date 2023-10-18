#include "main.h"

/**
 * print_reverse_string - print reverse strings
 * @argument: takes in argument
 * Return: return reversed 0
 */

int print_reverse_string(va_list argument)
{
	int i = 0, conter = 0;

	char *set = va_arg(argument, char *);

	if (!s)
		s = "(null)";
	while (s[i])
		i++;
	while (i >= 0)
	{
		counter += print_things(s[i]);
		i--;
	}
	counter--;
	return (counter);
}
}
