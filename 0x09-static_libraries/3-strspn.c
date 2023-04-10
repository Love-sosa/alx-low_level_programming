#include "main.h"

/**
* _strspn - function that gets the length of a prefix substring
* @s: input
* @accept: input
* Return: length of the prefix substring
*/

unsigned int _strspn(char *s, char *accept)
{
unsigned int len = 0;
int found;
char *a;

while (*s)
{
found = 0;
a = accept;
while (*a)
{
if (*s == *a)
{
len++;
found = 1;
break;
}
a++;
}
if (!found)
break;
s++;
}

return (len);
}

