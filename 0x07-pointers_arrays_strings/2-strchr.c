#include "main.h"

/**
* _strchr - locates a character in a string
* @s: pointer where we look for character
* @c: character look search for
* Return: pointer to the first occurrence of the character
*/

char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}

return (s);
}
