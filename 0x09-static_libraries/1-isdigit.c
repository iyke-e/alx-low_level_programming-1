#include "main.h"
/**
 * _isdigit - the entry point
 *
 * Description: checks for digits
 *
 * @c: letter to check
 * Return: always 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
