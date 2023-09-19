#include <stdio.h>
#include "main.h"

int main(void)
{
	int x;

	x = _printf("%b\n", -98);
	printf("_printf = %d\n", x);
	x = _printf("%b\n", 98);
	printf("_printf = %d\n", x);
	_printf("%b\n", 3);
	_printf("%b\n", 125);
	x = _printf("%b\n", 0);
	printf("%d\n",x);
	return (0);
}
