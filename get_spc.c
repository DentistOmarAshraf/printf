#include "main.h"

/**
 * _strcmp - string compare
 * @s1: pointer to str
 * @s2: pointer to str
 * Return: 1 if identical 0 if not
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0 ; s1[i] && s2[i] ; i++)
	{
		if (s1[i] == s2[i])
			continue;
		else
			return (0);
	}
	return (1);
}

/**
 * get_spc - get function for spacifier
 * @s: pointer to str
 * Return: function pointer
 */

void (*get_spc(char *s))(int*, va_list)
{
	spc_t spc[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_prcnt},
		{"d", print_num},
		{"i", print_num},
		{"b", print_bin},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (spc[i].str != NULL)
	{
		if (_strcmp(s, spc[i].str))
			return (spc[i].f);
		i++;
	}
	return (NULL);
}
