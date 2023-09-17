#include "main.h"

/**
 * _printf - function print str to stdout
 * @format: pointer to str
 * Return: int (number of char printed)
 */

int _printf(const char * const format, ...)
{
	int len, count;
	va_list args;
	char *str;
	void (*f)(int*, va_list);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	va_start(args, format);
	count = 0;
	for (len = 0 ; format[len] ; len++)
	{
		if (format[len] == '%')
		{
			while (format[len + 1] == ' ')
				len++;
			str = _copy(format[len + 1]);
			if (str == NULL)
				return (-1);
			f = get_spc(str);
			if (f == NULL)
			{
				count += write(1, &(format[len]), 1);
				free(str);
				continue;
			}
			f(&count, args);
			free(str);
			len++;
			continue;
		}
		count += write(1, &(format[len]), 1);
	}
	va_end(args);
	return (count);
}
