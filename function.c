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
	int j, len, x;
	char c;
	char *s;
	unsigned int num;

	x = va_arg(args, int);
	if (x == 0)
	{
		c = x + '0';
		*i += write(1, &c, 1);
		return;
	}
	if (x < 0)
	{
		c = '-';
		num = x * -1;
		*i += write(1, &c, 1);
	}
	else
	{
		num = x;
	}
	len = _count(num);
	s = malloc(sizeof(char) * (len + 1));
	if (s == NULL)
		exit(98);
	for (j = 0 ; j < len ; j++)
	{
		s[j] = (num % 10) + '0';
		num = num / 10;
	}
	s[j] = '\0';
	for (j = len - 1 ; j >= 0 ; j--)
		*i += write(1, &(s[j]), 1);
	free(s);
}

/**
 * print_bin - function to convert number to binary
 * @i: pointer to int
 * @args: va_list
 * Return: NONE
 */
void print_bin(int *i, va_list args)
{
	int j, len;
	char *s;
	unsigned int num;
	char c;

	num = va_arg(args, unsigned int);
	if (num == 0)
	{
		c = '0';
		*i += write(1, &c, 1);
	}
	if (num > 0)
	{
		len = _count_bin(num);
		s = malloc(sizeof(char) * (len + 1));
		if (s == NULL)
			exit(98);
		for (j = 0 ; j < len ; j++)
		{
			s[j] = (num % 2) + '0';
			num = num / 2;
		}
		s[j] = '\0';
		for (j = len - 2 ; j >= 0 ; j--)
			*i += write(1, &(s[j]), 1);
		free(s);
	}
}
