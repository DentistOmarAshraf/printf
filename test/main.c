#include "main.h"
#include <stdio.h>

int main(void)
{
	int x, y;

	x = _printf("%s, %c, %%\n", "Omar", 'O');
	y = printf("%s, %c, %%\n", "Omar", 'O');
	printf("_printf == %d || printf == %d\n\n", x, y);

	x = _printf("Let's try to printf a simple sentence.\n");
	y = printf("Let's try to printf a simple sentence.\n");
	printf("_printf == %d || printf == %d\n\n", x, y);

	x = _printf("String:[%s]\n", "I am a string !");
	y = printf("String:[%s]\n", "I am a string !");
	printf("_printf == %d || printf == %d\n\n", x, y);

	x = _printf("Percent:[%%]\n");
	y = printf("Percent:[%%]\n");
	printf("_printf == %d || printf == %d\n\n", x, y);

	x = _printf("%%o\n");
	y = printf("%%o\n");
	printf("_printf == %d || printf == %d\n\n", x, y);

	x = _printf("%   ");
	y = printf("%   ");
	printf("_printf == %d || printf == %d\n\n",x ,y);

	x = _printf(NULL);
	y = printf(NULL);
	printf("_printf == %d || printf == %d\n\n", x, y);
	
	x = _printf("css%ccs%scscscsc\n", 't', "test");
	y = printf("css%ccs%scscscsc\n", 't', "test");
	printf("_printf == %d || printf == %d\n\n", x, y);

	return (0);
}
