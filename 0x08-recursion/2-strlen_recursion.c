#include "main.h"
/**
 * _strlen_recursion - is a function that returns the length of a string.
 *
 * @s: is a pointer to a char array
 *
 * Return: Return the transformed pointer
 *
 **/
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
else
{
return (1 + _strlen_recursion(s + 1));
}
}
