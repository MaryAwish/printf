#include  "main.h"

/**
 * print_R13 - print rot13 encription
 * @dest: string to encript
 * @arg: arguments
 * @count: index to change
 * Return: new index
 */

int print_R13(char *dest, va_list arg, int count)
{
	char *str;
	char *keys = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *nkey = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i, j = 0;

	str = va_arg(arg, char *);
	while (str[j])
	{
		for (i = 0; keys[i]; i++)
		{
			if (str[j] == keys[i])
			{
				dest[count] = nkey[i];
				break;
			}
			dest[count] = str[j];
		}
		j++, count++;
	}
	return (count);
}
