#include "main.h"

/*
* _strpbrk - searches a string for any of a set of bytes
* @s: pointer to the input string
* @accept: pointer to the set of bytes to search for
*
* Return: pointer to the first occurrence of a matching byte
*/

char *_strpbrk(char *s, char *accept)
{
char *s1 = s - 1;
char *match;

do

{
s1++;
match = accept;
while (*match != '\0')
{
if (*s1 == *match)
return (s1);
match++;
}
} while (*s1 != '\0');

return (0);
}
