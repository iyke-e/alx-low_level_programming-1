#include "main.h"
#include <stdio.h>
/**
 * set_string - the main entry point
 * Description: that sets the value of a pointer to a char.
 * @s: pointer to a pointer
 * @to: the char
 * Return: pointer value
 */
void set_string(char **s, char *to)
{
	*s = to;
}
