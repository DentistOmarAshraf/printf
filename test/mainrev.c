#include <stdio.h>
#include "main.h"

int main(void)
{
	int x, y;

	x = _printf("%r\n","omar");
	y = printf("omar\n");
	_printf("_printf == %d || printf == %d\n", x, y);
	return (0);
}
