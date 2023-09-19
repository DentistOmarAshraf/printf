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

/**
 * print_rot - changing letters of str to Rot13 dyscription
 * @i: pointer to int
 * @args: va_list
 * Return: NONE
 */
void print_rot(int *i, va_list args)
{
	int x, j;
	char *str;
	char let[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char sub[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	str = va_arg(args, char *);
	if (str == NULL)
		str = "(null)";
	for (x = 0 ; str[x] ; x++)
	{
		for (j = 0 ; let[j] ; j++)
		{
			if (str[x] == let[j])
			{
				*i += write(1, &(sub[j]), 1);
				break;
			}
			if (!let[j + 1])
				*i += write(1, &(str[x]), 1);
		}
	}
}
