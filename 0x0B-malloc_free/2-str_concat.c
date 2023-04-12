#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
*str_concat - get ends of input and add together for size
*@s1: input one to concat
*@s2: input two to concat
*Return: concat of s1 and s2
*/

char *str_concat(char *s1, char *s2)
{
char *concat;
unsigned int len1, len2, i = 0, j = 0;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

len1 = strlen(s1);
len2 = strlen(s2);

concat = malloc(sizeof(char) * (len1 + len2 + 1));
if (concat == NULL)
return (NULL);

while (i < len1)
{
concat[i] = s1[i];
i++;
}
while (j < len2)
{
concat[i] = s2[j];
i++;
j++;
}
concat[i] = '\0';

return (concat);
}
