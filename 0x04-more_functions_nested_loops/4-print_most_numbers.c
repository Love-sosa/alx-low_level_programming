#include "main.h"

/**
* print_most_numbers - print all numbers 0 through 9 but no 2&4 and then \n
*/

void print_most_numbers(void)
{
int i;
for (i = 0; i <= 9; i++)
{
if (i != 2 && i != 4)
{
_putchar(i + '0');
}
}
_putchar('\n');
}
