#include "main.h"
/**
 * _puts_recursion - is a function that prints a string.
 *
 * @s: is a pointer to a char array
 *
 * Return: Return the transformed pointer
 *
 **/
void _puts_recursion(char *s)
{
if (*s == 0)
{
_putchar('\n');
return;
}
_putchar(*s);
s++;
_puts_recursion(s);
}
