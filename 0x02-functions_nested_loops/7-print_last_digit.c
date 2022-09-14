#include "main.h"
#include "6-abs.c"
/**
 *print_last_digit - main entry
 *Description: prints the last digit of a number
 *@r: number to compare
 *Return: always zero
 */
int print_last_digit(int r)
{
	int num;

	num = r % 10;
	_putchar('0' + _abs(num));
	return (_abs(num));
}
