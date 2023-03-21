#include <stdio.h>

/**
 * main - Starting point of the code
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c = 'a';

while (c <= 'z')
;

{
putchar(c);
c++;
}

c = 'A';
while (c <= 'Z')
;

{
putchar(c);
c++;
}
putchar('\n');

return (0);
}
