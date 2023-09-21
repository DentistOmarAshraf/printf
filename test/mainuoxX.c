#include <stdio.h>
#include <limits.h>
#include "main.h"

int main(void)
{
	unsigned int x;
	int i, j;

	x = 1024;
	i = _printf("%u\n", x);
	j = printf("%u\n", x);
	_printf("_printf = %d || printf = %d\n", i, j);
	x = -1024;
	i = _printf("%u\n", x);
	j = printf("%u\n", x);
	_printf("_printf = %d || printf = %d\n", i, j);
	i = _printf("%u\n", -1024);
	j = printf("%u\n", -1024);
	_printf("_printf = %d || printf = %d\n", i, j);
	i = _printf("%u\n", UINT_MAX);
	j = printf("%u\n", UINT_MAX);
	_printf("_printf = %d || printf = %d\n", i, j);
	return (0);
}
