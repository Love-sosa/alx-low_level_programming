#include "main.h"
#include <stdlib.h>

/**
*_memset - fills memory with a constant byte
*@s: memory area to be filled
*@b: byte to copy
*@n: number of bytes to copy
*
*Return: pointer to the memory area s
*/

void *_memset(void *s, int b, size_t n)
{
unsigned char *p = s;
while (n-- > 0)
*p++ = (unsigned char) b;
return (s);
}

/**
*_calloc - allocates memory for an array
*@nmemb: number of elements in the array
*@size: size of each element
*
*Return: pointer to allocated memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;

if (nmemb == 0 || size == 0)
return (NULL);

ptr = malloc(nmemb * size);

if (ptr == NULL)
return (NULL);

_memset(ptr, 0, nmemb * size);

return (ptr);
}
