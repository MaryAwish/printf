#include "main.h"
#include <string.h>

/**
 * ev_print_func - returns the amount of identifiers.
 * @s: argument indentifier
 * @index: index of argument identifier.
 * Return: amount of identifiers.
 */
int ev_print_func(const char *s, int index)
{
	fmt_t pr[] = {
		{'c', print_char}, {'s', print_string}, {'i', print_int},
		{'d', print_int}, {'b', print_binary}, {'u', print_unsigned},
		{'o', print_octal}, {'x', print_hexadecimal}, {'X', print_hexa_upper},
		{'S', print_non_printable}, {'p', print_pointer},
		{'R', print_rot13string}, {'r', print_reverse}, {'%', print_percent},
		{'\0', NULL},
	};
	int i = 0, j = 0, fi;

	fi = index;
	while (pr[i].fmt)
	{
		if (s[index] == pr[i].fmt[j])
		{
			if (pr[i].fmt[j + 1] != '\0')
				index++, j++;
			else
				break;
		}
		else
		{
			j = 0;
			i++;
			index = fi;
		}
	}
	return (j);
}
