#include "main.h"
#include <stdio.h>

/**
*  * print_diagsums - prints the sum of the two diagonals of a square matrix
* @a: pointer to the square matrix
* @size: size of the square matrix
* Return: void
*/
void print_diagsums(int *a, int size)
{
int i, sum1 = 0, sum2 = 0;

/* Calculate sum of main diagonal */
for (i = 0; i < size; i++)
{
sum1 += a[(size + 1) * i];
}

/* Calculate sum of anti-diagonal */
for (i = 0; i < size; i++)
{
sum2 += a[(size - 1) * (i + 1)];
}

printf("Sum of main diagonal: %d\n", sum1);
printf("Sum of anti-diagonal: %d\n", sum2);
}
