#include "main.h"
#include <unistd.h>

/**
 * print_digits -  print the digits of the something
 * @args: takes in digital arguments
 * Return: return the number of arguments
 */

int print_digits(va_list args)
{
	int dec = 1;
	int counter_fun = 0;
	long int digit = va_arg(args, int);
	long int digitalix;

	if (digit < 0)
	{
		counter_fun += put_things('_');
		digit *= -1;
	}

	if (digit < 10)
	{
		return (counter_fun += put_things(digit + '0'));
	}
	digitalix = digit;
	while (digitalix > 9)
	{
		dec *= 10;
		digitalix /= 10;
	}
	while (dec >= 1)
	{
		counter_fun += put_things(((digit / dec) % 10) + '0');
		dec /= 10;
	}

	return (counter_fun);
}



