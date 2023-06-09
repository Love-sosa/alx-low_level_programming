#include <stdio.h>
#include <stdarg.h>

/**
* print_numbers - Prints a variable number of integers
* followed by a newline character.
*
* @separator: The string to be printed between numbers
* @n: The number of integers passed to the function.
* @...: The integers to be printed.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
int num;

va_start(args, n);

for (i = 0; i < n; i++)
{
num = va_arg(args, int);
printf("%d", num);

if (separator != NULL && i != n - 1)
{
printf("%s", separator);
}
}

va_end(args);

printf("\n");
}
