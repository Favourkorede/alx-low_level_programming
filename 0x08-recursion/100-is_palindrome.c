#include "main.h"
int _strlen_recursion(char *s);
int _comparission(char *s, int legth);
/**
 * is_palindrome - function to know when a string is palindrome or not..
 *
 * @s: is a pointer to a string.
 *
 * Return: Returns _comparission parameters.
 *
 **/
int is_palindrome(char *s)
{
int len = _strlen_recursion(s);
if (len == 1)
return (1);
else if (len < 0)
return (0);
else
return (_comparission(s, len));
}
/**
 * _strlen_recursion - Function for counting size of a string.
 *
 * @s: points to the string.
 *
 * Return: Returns the size of the string.
 *
 **/
int _strlen_recursion(char *s)
{
if (*s == 0)
return (0);
return (1 + _strlen_recursion(s + 1));
}
/**
 * _comparission - Function that compares initial index and last index.
 *
 * @s: points to the string.
 * @length: is the size of the string.
 *
 * Return: Returns increased s and decreased length
 *
 **/
int _comparission(char *s, int length)
{
if (length <= 1)
return (1);
else if (*s == s[length - 1])
return (_comparission(++s, ((length - 1) - 1)));
else
return (0);
}
