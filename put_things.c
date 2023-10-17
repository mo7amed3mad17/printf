#include "main.h"

/**
 * put_things - prints character
 * @character: the character input
 * Return: return 1 when successful
 */

int put_things(char character)
{
	return (write(1, &character, 1));
}
