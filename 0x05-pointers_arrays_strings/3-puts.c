#include "main.h"
/**
 * _puts -> Function that pints a string followed by a new line
 * @str: String to be outputed
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
	_putchar(*str);
	}
	_putchar('\n');
}

