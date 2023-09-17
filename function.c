#include "main.h"

/**
 * print_char - print char
 * @i: pointer to int
 * @args: va_list
 * Return: NONE
 */
void print_char(int *i, va_list args)
{
	char c;

	c = va_arg(args, int);
	write(1, &c, 1);
	*i += 1;
}

/**
 * print_str - print string
 * @i: pointer to int
 * @args: va_list
 * Return: NONE
 */
void print_str(int *i, va_list args)
{
	unsigned int len;
	char *s;

	s = va_arg(args, char *);
	for (len = 0 ; s[len] ; len++)
	{
		write(1, &s[len], 1);
		*i += 1;
	}
}

/**
 * print_prcnt - print percent
 * @i: pointer to int
 * @args: va_list
 * Return: NONE
 */
void print_prcnt(int *i, va_list args)
{
	char c;
	(void)args;

	c = '%';
	write(1, &c, 1);
	*i += 1;
}
