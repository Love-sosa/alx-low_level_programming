#include "main.h"
/**
* factorial - returns the factorial of a given number
* @n: number to calculate factorial of
* Return: factorial of n, or -1 if n is negative
*/

int factorial(int n)
{
int fact = 1;

if (n < 0)
return (-1);
else
{
for (; n > 0; n--)
fact *= n;
return (fact);
}
}
