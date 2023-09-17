#include "main.h"

/**
 * _copy - function to copy chars & make str
 * @c1: char
 * @c2: char
 * Return: pointer to str
 */
char *_copy(char c1, char c2)
{
	char *str;

	str = malloc(sizeof(char) * 3);
	if (str == NULL)
		return (NULL);
	str[0] = c1;
	str[1] = c2;
	str[2] = '\0';

	return (str);
}
