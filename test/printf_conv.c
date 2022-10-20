#include "main.h"

/**
 * print_bin - print binary
 * @dest: string to change
 * @arg: arguments
 * @count: index of buffer
 * Return: new index
 */

int print_bin(char *dest, va_list arg, int count)
{
	unsigned int num = va_arg(arg, unsigned int);
	unsigned int tmp = num;
	int bin = 1;

	while (tmp > 1)
	{
		bin *= 2;
		tmp /= 2;
	}
	tmp = num;
	while (bin > 0)
	{
		dest[count] = ('0' + tmp / bin);
		tmp %= bin;
		bin /= 2;
		count++;
	}
	return (count);
}

/**
 * print_oct - prints hexagon lowacase
 * @destb: ...
 * @arg: ...
 * @countb: ...
 * Return: ...
 */

int print_oct(char *destb, va_list arg, int countb)
{
	unsigned int no = va_arg(arg, unsigned int);
	unsigned int tp = no;
	int oct = 1;

	while (tp > 7)
	{
		oct *= 8;
		tp /= 8;
	}

	tp = no;
	while (oct > 0)
	{
		destb[countb] = ('0' + tp / oct);
		tp %= oct;
		oct /= 8;
		countb++;
	}
	return (countb);
}
