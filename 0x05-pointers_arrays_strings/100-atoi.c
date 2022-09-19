#include "main.h"
/**
 * _atoi - the entry point
 * Description: convert a string to an integer
 * @s: string pointer
 * Return: always 0
 */
int _atoi(char *s)
{
	int sign = 1; /* initialize sign as positive */
	int num = 0;

	do {
		if (*s == '-')
			sign *= -1;

		else if (*s >= '0' && *s <= '9')
			/* ascii value of number - zero = integer */
			/* for 121 e.g 0 * 10 + 1 = 1 */
			/* num = 1, 1 * 10 + 2 = 12 */
			/* num = 12, 12 * 10 + 1 = 121 */
			num = (num * 10) + (*s - '0');

		else if (num > 0)
			break;
	} while (*s++);

	return (num * sign);
}
