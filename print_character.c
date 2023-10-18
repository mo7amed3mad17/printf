#include "main.h"
#include <unistd.h>

/**
 * print_character - print the characters it takes
 * @argument: argument taken
 * Return: the character
 */

int print_character(va_list argument)
{
	char c;

	c = va_arg(argument, int);
	put_things(c);
	return (1);
}
