#include "main.h"
#include <stdio.h>

int main(void)
{
	int x, y;

	x = _printf("%d\n", 0);
	y = printf("%d\n", 0);
	printf("_printf = %d || printf = %d\n\n", x, y);
	x = _printf("%d\n", -450);
	y = printf("%d\n", -450);
	printf("_printf = %d || printf = %d\n\n", x, y);
	x = _printf("Negative:[%i]\n", -762534);
	y = printf("Negative:[%i]\n", -762534);
	printf("_printf = %d || printf = %d\n\n", x, y);

	return (0);
}
