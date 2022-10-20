#include"main.h"

/**
 * print_int - print integer %i
 * @dest: string to change
 * @arg: arguments
 * @count: index of dest
 * Return: new index
 */

int print_int(char *dest, va_list arg, int count)
{
	int t = 1;
	unsigned int tmp;
	int num;

	num = va_arg(arg, int);

	if (num < 0)
	{
		dest[count] = '-';
		num *= -1;
		count++;
	}

	tmp = num;

	if (num == INT_MIN)
		tmp++;
	while (tmp > 9)
	{
		t *= 10;
		tmp /= 10;
	}
	tmp = num;
	while (t > 0)
	{
		dest[count] = ('0' + tmp / t);
		tmp %= t;
		count++;
	}
	return (count);
}

/**
 * print_uint - prints unsigned int
 * @destb: string to change
 * @arg: argument
 * @countb: index
 * Return: new index
 */

int print_uint(char *destb, va_list arg, int countb)
{
	int x = 1;
	unsigned int tp;
	unsigned int nm;

	nm = va_arg(arg, unsigned int);

	tp = nm;

	while (tp > 9)
	{
		x *= 10;
		tp /= 10;
	}

	tp = nm;
	while (x > 0)
	{
		destb[countb] = ('0' + tp / x);
		tp %= x;
		x /= 10;
		countb++;
	}
	return (countb);
}
