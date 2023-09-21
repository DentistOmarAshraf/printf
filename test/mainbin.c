#include <stdio.h>
#include "main.h"
#include <limits.h>

int main(void)
{
	int x;

	x = _printf("%b\n", 98);
	_printf("_printf = %d\n", x);
	x = _printf("%b\n", 1024);
	_printf("(1024)_printf = %d\n", x);
	x = _printf("%b\n", -1024);
	printf("(-1024)_printf = %d\n", x);
	x = _printf("%b\n", UINT_MAX);
	printf("(UINT_MAX)_printf = %d\n", x);
	x = _printf("%b\n", INT_MAX);
	_printf("(INT_MAX)_printf = %d\n", x);
	x = _printf("%b\n", 0);
	_printf("%d\n", x);
	return (0);
}
