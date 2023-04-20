#include "function_pointers.h"
#include <stddef.h>

/**
* array_iterator - Applies a function to each element of an array
* @array: Pointer to the first element of the array
* @size: The number of elements in the array
* @action: A function pointer to the action to apply to each element
*
* This function applies the given action function to each element of the
* array, in order. If any of the parameters are NULL, this function does
* nothing.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

if (!array || !action)
{
return;
}


for (i = 0; i < size; ++i)
{
(*action)(array[i]);
}
}
