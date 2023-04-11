#include <stdio.h>

/**
* main - function that prints all arguments it receives
* @argc: the size of the argv array, the number of command line arguments
* @argv: an array containing the program command line arguments
* Return: 0 if successful
*/

int main(int argc, char *argv[])
{
int i = 0;

while (i < argc)
{
printf("%s\n", argv[i]);
i++;
}

return (0);
}
