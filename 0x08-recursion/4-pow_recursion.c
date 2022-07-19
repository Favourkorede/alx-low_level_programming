#include "main.h"
/**
 * _pow_recursion - is a function that returns the value.
 *
 * @x: is an int to power recursive function.
 * @y: is an int to power recursive function.
 *
 * Return: Return the transformed pointer
 *
 **/
int _pow_recursion(int x, int y)
{
if (y > 0)
{
return (x * _pow_recursion(x, y - 1));
}
else if (y == 0 || x == 1)
{
return (1);
}
else if (y < 0)
{
return (-1);
}
return (0);
}
