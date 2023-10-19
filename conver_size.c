#include "main.h"

/**
 * convert_size_unsgnd - print unsigned to specifed size
 * @number: number that you should cast
 * @size: number indicating what should be casted
 * Return: return the casted value number
 */

long int convert_size_unsgnd(unsigned long int number, int size)
{
	if (size == S_LONG)
		return (number);
	else if (size == S_SHORT)
		return ((unsigned short)number);
	
	return ((unsigned int)number);
}

