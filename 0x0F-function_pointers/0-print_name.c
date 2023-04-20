#include "function_pointers.h"
#include <stdio.h>

/**
* print_name - Prints a name using a function pointer
* @name: The name to print
* @f: The function to use for printing
*
* Return: void
*/
void print_name(char *name, void (*f)(char *))
{
/* Check for NULL pointers */
if (name == NULL || f == NULL)
return;

/* Call the printing function with the name */
f(name);
}
