#include "main.h"

/**
 * print_un - printing unsigned number
 * @i: pointer to int
 * @args: va_list
 * Return: NONE
 */
void print_un(int *i, va_list args)
{
	int len, j;
	char c;
	char *s;
	unsigned int num;

	num = va_arg(args, unsigned int);
	if (num == 0)
	{
		c = '0';
		*i += write(1, &c, 1);
		return;
	}
	len = _count_un(num);
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
