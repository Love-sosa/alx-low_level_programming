#include "main.h"
#include <stdlib.h>
/**
*alloc_grid - nested loop to make grid
*@width: width input
*@height: height input
*Return: pointer to 2 dim. array
*/

int **alloc_grid(int width, int height)
{
int **twoD;
int i, j;

if (width <= 0 || height <= 0)
return (NULL);

twoD = (int **) malloc(sizeof(int *) * height);
if (twoD == NULL)
return (NULL);

for (i = 0; i < height; i++)
{
twoD[i] = (int *) malloc(sizeof(int) * width);
if (twoD[i] == NULL)
{
for (j = 0; j < i; j++)
free(twoD[j]);
free(twoD);
return (NULL);
}
for (j = 0; j < width; j++)
twoD[i][j] = 0;
}

return (twoD);
}
