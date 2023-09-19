#include "main.h"

/**
 * print_rev - print str reverses
 * @i: pointer to int
 * @args: va_list
 * Return: NONE
 */
void print_rev(int *i, va_list args)
{
	char *str;
	int len, j;

	str = va_arg(args, char *);
	if (str == NULL)
		str = "(null)";
	len = _strlen(str);
	for (j = len - 1 ; j >= 0 ; j--)
		*i += write(1, &(str[j]), 1);
}
