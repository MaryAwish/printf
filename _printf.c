#include "main.h"
<<<<<<< HEAD
/**
  * _printf - function that prints based on format specifier
  * @format: takes in format in form of character string
  * Return: return pointer to index
  */
int _printf(const char *format, ...)
{
	char buffer[1024];
	int i, j = 0, a = 0, *index = &a;
	va_list valist;
	vtype_t spec[] = {
		{'c', format_c}, {'d', format_d}, {'s', format_s}, {'i', format_d},
		{'u', format_u}, {'%', format_perc}, {'x', format_h}, {'X', format_ch},
		{'o', format_o}, {'b', format_b}, {'p', format_p}, {'r', format_r},
		{'R', format_R}, {'\0', NULL}
	};
	if (!format)
		return (-1);
	va_start(valist, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		for (; format[i] != '%' && format[i] != '\0'; *index += 1, i++)
		{
			if (*index == 1024)
			{	_write_buffer(buffer, index);
				reset_buffer(buffer);
				*index = 0;
			}
			buffer[*index] = format[i];
		}
		if (format[i] == '\0')
			break;
		if (format[i] == '%')
		{	i++;
			for (j = 0; spec[j].tp != '\0'; j++)
			{
				if (format[i] == spec[j].tp)
				{	spec[j].f(valist, buffer, index);
					break;
				}
			}
		}
	}
	va_end(valist);
	buffer[*index] = '\0';
	_write_buffer(buffer, index);
	return (*index);
=======

/**
 * _printf - printf function
 * @format: const char pointer
 * Return: count
 */

int _printf(const char *format, ...)
{
	int (*pfunc)(va_list, flags_t *);
	const char *p;
	va_list args;
	flags_t flags = {0, 0, 0};

	register int count = 0;

	va_start(args, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (p = format; *p; p++)
	{
		if (*p == '%')
		{
			p++;
			if (*p == '%')
			{
				count += _putchar('%');
				continue;
			}
			while (get_flag(*p, &flags))
				p++;
			pfunc = get_print(*p);
			count += (pfunc)
				? pfunc(args, &flags)
				: _printf("%%%c", *p);
		}
		else
			count += _putchar(*p);
	}

	_putchar(-1);
	va_end(args);
	return (count);
>>>>>>> 566d7ce271e3a53eeab1625082dcf4c4ad5ad1b7
}
