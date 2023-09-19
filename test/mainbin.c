#include <stdio.h>
#include "main.h"

int main(void)
{
	int x;

	x = _printf("%b\n", -98);
	printf("_printf = %d\n", x);
	x = _printf("%b\n", 98);
	printf("_printf = %d\n", x);
	return (0);
}
