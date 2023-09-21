#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * struct spc - struct for spacifier
 * @str: pointer to str
 * @f: pointer to function
 */
typedef struct spc
{
	char *str;
	void (*f)(int *, va_list);
} spc_t;
int _printf(const char * const format, ...);
void print_char(int *, va_list);
void print_str(int *, va_list);
void print_prcnt(int *, va_list);
void print_num(int *, va_list);
void print_bin(int *, va_list);
void print_rev(int *, va_list);
void print_rot(int *, va_list);
void print_un(int *, va_list);
void print_oc(int *, va_list);
char *_copy(char);
int _count(int);
int _count_bin(unsigned int);
int _count_un(unsigned int);
int _count_oc(unsigned int);
int _strlen(char *);
void (*get_spc(char *s))(int *, va_list);

#endif
