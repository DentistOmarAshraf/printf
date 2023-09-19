#include "main.h"
#include <stdio.h>

int main(void)
{
	int x, y;
	x = printf("ROT13 (\"rotate by 13 places\", sometimes hyphenated ROT-13) is a simple letter substitution cipher.\n");
	y = _printf("%R", "ROT13 (\"rotate by 13 places\", sometimes hyphenated ROT-13) is a simple letter substitution cipher.\n");
	_printf("_printf == %d || printf == %d\n", x, y);

	return (0);
}
