#include "main.h"

/**
* _sqrt_recursion_helper - calculates the natural square root of a number
* @n: the number to calculate the square root of
* @sqrt: the current guess for the square root
*
* Return: the natural square root of n, or -1 if n does not have a natural
* square root
*/

int _sqrt_recursion_helper(int n, int sqrt)
{
if (sqrt * sqrt > n)
return (-1);
else if (sqrt * sqrt == n)
return (sqrt);

return (_sqrt_recursion_helper(n, sqrt + 1));
}

/**
* _sqrt_recursion - returns the natural square root of a number
* @n: the number to calculate the square root of
*
* Return: the natural square root of n, or -1 if n does not have a natural
* square root
*/

int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);

return (_sqrt_recursion_helper(n, 0));
}
