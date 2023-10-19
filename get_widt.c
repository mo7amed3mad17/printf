#include "main.h"
/**
 * get_width - Calculates the width for printing
 * @form: Formatted string in which to print the arguments.
 * @i: List of arguments to be printed.
 * @listing: list of arguments.
 * Return: width.
 */
int get_width(const char *form, int *i, va_list listing)
{
	int curr_i;
	int width = 0;

	for (curr_i = *i + 1; form[curr_i] != '\0'; curr_i++)
	{
		if (is_digit(form[curr_i]))
		{
			width *= 10;
			width += form[curr_i] - '0';
		}
		else if (form[curr_i] == '*')
		{
		curr_i++;
		width = va_arg(listing, int);
		break;
		}
		else
		break;
	}
	*i = curr_i - 1;
	return (width);
}

