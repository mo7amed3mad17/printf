#include "main.h"

/**
 * print_string - print the strings
 * @cha: the characters
 * Retrun: number of byte
 */

int print_string(char *cha)
{
	int counter = 0;

	if (cha)
	{
		for (counter = 0; cha[counter] != '\0'; counter++)
		{
			put_things(cha[counter]);
		}

	}

	return (counter);

}
