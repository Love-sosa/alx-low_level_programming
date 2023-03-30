#include <stdio.h>

int main(void)
{
int a[] = { 0, 1, 2, 3, 4 };
int *p = a;
/*
* write your line of code here...
* Remember:
* - you are not allowed to use a
* - you are not allowed to modify p
* - only one statement
* - you are not allowed to code anything else than this line of code
*/

p += 2;
printf("a[2] = %d\n", *(p));
return (0);
}
