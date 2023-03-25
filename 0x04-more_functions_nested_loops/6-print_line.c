#include "main.h"

/**
* print_line - print a straight line using putchar of n size
* @n: size of line
*/

void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int i;
for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
}
