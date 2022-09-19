#include "main.h"
#include "2-strlen.c"
/**
 * _atoi - the entry point
 *
 * Description: convert a string to an integer
 *
 * @s: string pointer
 *
 * Return: always 0
 */
int _atoi(char *s)
{
	int i;
	int len = _strlen(s);
	int neg_sign = 1; /* initialize sign as positive */
	int num = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (!(s[i] >= '0' && s[i] <= '9'))
		{
			break;
		}
		num = (num * 10) + s[i] - '0';
	}

	if (s[i] == '-')
	{
		neg_sign * -1;
		i++;
	}

	return (neg_sign * num);
}
