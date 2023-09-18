#include <stdio.h>
#include "main.h"

int main(void)
{
	int x = _printf("%b\n", 98);
	int y = printf("%b\n", 98);
	printf("_printf = %d || printf = %d\n", x, y);
	return (0);
}
