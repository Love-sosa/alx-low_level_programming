#include <stdio.h>

/**
* main - function that prints number of arguments followed by a new line
* @argc: the size of the argv array, the number of command line arguments
* @argv: an array containing the program command line arguments
* Return: 0 if successful
*/

int main(int argc, __attribute__((unused)) char *argv[])
{
int num_args = argc - 1;

printf("%d\n", num_args);

return (0);
}
