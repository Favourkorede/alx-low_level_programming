#include "main.h"
int _divider(int x, int n);
/**
 * is_prime_number - Returns 0 on none prime, 1 on prime number..
 *
 * @n: is a pointer to an int.
 *
 * Return: Returns the result.
 *
 **/
int is_prime_number(int n)
{
if (n <= 1)
return (0);
else
return (_divider(2, n));
}
/**
 * _divider - Returns an iterative division.
 *
 * @x: is an int.
 * @n: is an int.
 *
 * Return: Returns the result.
 *
 **/
int _divider(int x, int n)
{
if (x == n)
return (1);
else if (n % x == 0)
return (0);
else
return (_divider(++x, n));
}
