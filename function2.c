#include "main.h"

/**
 * _copy - function to copy chars & make str
 * @c1: char
 * Return: pointer to str
 */
char *_copy(char c1)
{
	char *str;

	str = malloc(sizeof(char) * 2);
	if (str == NULL)
		return (NULL);
	str[0] = c1;
	str[1] = '\0';

	return (str);
}

/**
 * _count - this function for counting width of number
 * Description: helper function for print int
 * @x: int
 * Return: int
 */
int _count(int x)
{
	if (x == 0)
		return (0);
	return (1 + _count(x / 10));
}

/**
 * _count_bin - function counting width of number in binary
 * Description: this function designed for malloc array of binary
 * @x: int
 * Return: int
 */
unsigned int _count_bin(unsigned int x)
{
	if (x / 2 == 0 && x % 2 == 0)
		return (1);
	return (1 + _count_bin(x / 2));
}

/**
 * _strlen - string length
 * @str: pointer to str
 * Return: int
 */
int _strlen(char *str)
{
	if (*str == '\0')
		return (0);
	return (1 + _strlen(str + 1));
}
