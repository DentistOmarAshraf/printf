#include "main.h"

/**
 * _count_oc - counting number in octal number system
 * Description: this function to know how many octal number
 * @x: unsigned int
 * Return: int
 */
int _count_oc(unsigned int x)
{
	if (x / 8 == 0 && x % 8 == 0)
		return (0);
	return (1 + _count_oc(x / 8));
}
