#include "main.h"
/**
 * print_rev - reverse.
 * @args: Arguments
 * Return: Strlen
 */
int print_rev(va_list args)
{

	int counter = 0, i = 0;
	char *s = va_arg(args, char *);

	if (!s)
		s = "(null)";
	while (s[i])
	{
		i++;
	}
	while (i >= 0)
	{
		counter += put_things(s[i]);
		i--;
	}
	counter--;
	return (counter);
}
