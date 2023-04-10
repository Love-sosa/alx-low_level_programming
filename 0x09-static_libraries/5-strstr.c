#include "main.h"

/**
* _strstr - locates a character in a string
* @haystack: pointer where we search for character
* @needle: character we search for
* Return: NULL if character is not found, return pointer
*/

char *_strstr(char *haystack, char *needle)
{
char *s1 = haystack;
int len = 0, count;

while (*(needle + len))
len++;

while (*s1)
{
for (count = 0; count < len; count++)
if (*(s1 + count) != *(needle + count))
break;
if (count == len)
return (s1);
s1++;
}

return (0);
}
