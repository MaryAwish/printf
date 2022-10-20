#include "main.h"

/**
 * print_hex - prints hexagon lowacase
 * @dest: string
 * @arg: arguments
 * @count: index
 * Return: new index
 */

int print_hex(char *dest, va_list arg, int count)
{
	unsigned int num = va_arg(arg, unsigned int);
	unsigned int tmp = num;
	int hex = 1;

	while (tmp > 15)
	{
		hex *= 16;
		tmp /= 16;
	}
	tmp = num;
	while (hex > 0)
	{
		dest[count] = (tmp / hex < 9) ?
			(tmp / hex + '0') : ('a' + tmp / hex - 10);
		tmp %= hex;
		hex /= 16;
		count++;
	}
	return (count);
}

/**
 * print_heX - prints hexadecimal in uppercase
 * @dest: ...
 * @arg: ...
 * @count: ...
 * Return: ...
 */

int print_heX(char *dest, va_list arg, int count)
{
	unsigned int num = va_arg(arg, unsigned int);
	unsigned int tmp = num;
	int x = 1;

	while (tmp > 15)
	{
		x *= 16;
		tmp /= 16;
	}

	tmp = num;

	while (x > 0)
	{
		dest[count] = (tmp / x < 9) ?
			(tmp / x + '0') : ('A' + tmp / x - 10);
		tmp %= x;
		x /= 16;
		count++;
	}

	return (count);
}
