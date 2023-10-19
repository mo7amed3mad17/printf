#include "main.h"
/**
 * get_flags - Calculates active flags
 * @format: Formatted string in which to print the arguments
 * @i: take a parameter.
 * Return: Flags:
 */
int get_flags(const char *format, int *i)
{
	int joe, current_i;
	int flags = 0;
	const char FLAGS_CH[] = {'-', '+', '0', '#', ' ', '\0'};
	const int FLAGS_ARR[] = {F_MINUS, F_PLUS, F_ZERO, F_HASH, F_SPACE, 0};

	for (current_i = *i + 1; format[current_i] != '\0'; current_i++)
	{
		for (joe = 0; FLAGS_CH[joe] != '\0'; joe++)
			if (format[current_i] == FLAGS_CH[joe])
			{
				flags |= FLAGS_ARR[joe];
				break;
			}
		if (FLAGS_CH[joe] == 0)
			break;
	}
	*i = current_i - 1;
	return (flags);
}

