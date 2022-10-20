#include "main.h"

/**
 * print_char - returns the character
 * @dest: buffer
 * @arg: list of arguments
 * @count: index of buffer pointer
 * Return: buffer index
 */

int print_char(char *dest, va_list arg, int count)
{
	char c = va_arg(arg, int);

	dest[count] = c;

	return (++count);
}

/**
 * print_str - writes the string
 * @destb: character string
 * @arg: list of argument
 * @countb: index f buffer pointer
 * Return: No of characters printed
 */

int print_str(char *destb, va_list arg, int countb)
{
	char *str;
	int i = 0;

	str = va_arg(arg, char *);
	if (str == NULL)
		str = "(null)";

	if (str[0] == '\0')
	{
		destb[countb] = '\0';
		countb++;
	}
	while (str[i] != '\0')
	{
		destb[countb] = str[i];
		i++;
		countb++;
	}
	return (countb);
}

/**
 * print_per - prints percent %
 * @destc: character
 * @arg: arguments
 * @countc: index buffer pointer
 * Return: buffer index
 */

int print_per(char *destc, va_list arg, int countc)
{
	char c = va_arg(arg, int);

	c = '%';

	destc[countc] = c;

	return (++countc);
}
