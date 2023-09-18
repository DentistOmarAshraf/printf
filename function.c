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
	if (s == NULL)
		s = "(null)";

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

/**
 * print_num - print number
 * @i: pointer to int
 * @args: valist
 * Return: NONE
 */
void print_num(int *i, va_list args)
{
	int j, x, len;
	char c;
	char *s;

	x = va_arg(args, int);
	if (x < 0)
	{
		c = '-';
		*i += write(1, &c, 1);
		x *= -1;
	}
	len = _count(x);
	s = malloc(sizeof(char) * (len + 1));
	for (j = 0 ; j < len ; j++)
	{
		s[j] = (x % 10) + '0';
		x = x / 10;
	}
	s[j] = '\0';
	for (j = len - 1 ; j >= 0 ; j--)
		*i += write(1, &(s[j]), 1);
	free(s);
}
