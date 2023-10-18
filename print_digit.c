#include "main.h"
#include <unistd.h>
/**
 * print_digit - print integers.
 * @args: argument.
 * Return: counter
 */

int print_digit(va_list args)
{
	int decimal = 0;
	int counter = 0;
	long int digit = va_arg(args, int);
	long int digit_k;

	if (digit < 0)
	{
		counter += put_things('-');
		digit *= -1;
	}

	if (digit < 10)
		return (counter += put_things(digit + '0'));

	digit_k = digit;

	while (digit_k > 9)
	{
		decimal *= 10;
		digit_k /= 10;
	}
	while (decimal >= 1)
	{
		counter += put_things(((digit / decimal) % 10) + '0');
		decimal /= 10;
	}

	return (counter);
}
