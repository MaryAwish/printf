#include "main.h"

/**
 * print_rev - prints reverse string
 * @dest: string to change
 * @arg: argument
 * @count: index for buffer
 * Return: new index
 */

int print_rev(char *dest, va_list arg, int count)
{
	int i = 0;
	char *str;

	str = va_arg(arg, char *);
	if (str)
	{
		while (str[i] != '\0')
			i++;
		i = i - 1;
		while (i >= 0)
		{
			dest[count] = str[i];
			count++;
			i--;
		}
	}
	return (count);
}
