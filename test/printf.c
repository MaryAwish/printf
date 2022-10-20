#include "main.h"

/**
 * _printf - formatted output convesion
 * @format: input string
 *
 * Return: number of chars printed
 */

int _printf(const char *format, ...)
{
	int i = 0, j = 0, count = 0, prev_count = 0;
	char buff[1024];
	va_list arg;
	call_t cont[] = {
		{'c', print_char},
		{'s', print_str},
		{'i', print_int},
		{'d', print_int},
		{'%', print_per},
		{'b', print_bin},
		{'o', print_oct},
		{'x', print_hex},
		{'X', print_heX},
		{'u', print_uint},
		{'R', print_R13},
		{'r', print_rev},
		{'\0', NULL}
	};

	if (!format)
		return (-1);
	va_start(arg, format);
	while (format && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++, prev_count = count;
			for (j = 0; cont[j].t != '\0'; j++)
			{
				if (format[i] == '\0')
					break;
				if (format[i] == cont[j].t)
				{
					count = cont[j].f(buff, arg, count);
					break;
				}
			}
			if (count == prev_count && format[i])
				i--, buff[count] = format[i], count++;
		}
		buff[count] = format[i];
		count++;

		i++;
	}

	va_end(arg);

	buff[count] = '0';

	print_buff(buff, count);

	return (count);
}
