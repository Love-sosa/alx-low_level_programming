#include <stdio.h>
#include <stdlib.h>

int _isdigit(int c);
void print_error(void);
void multiply_numbers(char *num1, char *num2);

/**
* _isdigit - checks if a character is a digit
* @c: the character to check
*
* Return: 1 if c is a digit, 0 otherwise
*/
int _isdigit(int c)
{
return (c >= '0' && c <= '9');
}

/**
* print_error - prints an error message and exits with a status of 98
*/
void print_error(void)
{
printf("Error\n");
exit(98);
}

/**
* multiply_numbers - multiplies two positive numbers
* @num1: first number to multiply
* @num2: second number to multiply
*/
void multiply_numbers(char *num1, char *num2)
{
int i, j, carry, digit, len1, len2, *result;

/* Check that num1 and num2 only contain digits */
for (i = 0; num1[i] != '\0'; i++)
{
if (!_isdigit(num1[i]))
print_error();
}
len1 = i;

for (i = 0; num2[i] != '\0'; i++)
{
if (!_isdigit(num2[i]))
print_error();
}
len2 = i;

/* Allocate memory for result array */
result = calloc(len1 + len2, sizeof(int));
if (result == NULL)
print_error();

/* Multiply the numbers */
for (i = len1 - 1; i >= 0; i--)
{
carry = 0;
for (j = len2 - 1; j >= 0; j--)
{
digit = (num1[i] - '0') * (num2[j] - '0');
digit += result[i + j + 1] + carry;
result[i + j + 1] = digit % 10;
carry = digit / 10;
}
result[i + j + 1] = carry;
}

/* Print the result */
i = 0;
while (result[i] == 0 && i < len1 + len2 - 1)
i++;

for (; i < len1 + len2; i++)
printf("%d", result[i]);

printf("\n");
free(result);
}

/**
* main - parses arguments and calls multiply_numbers function
* @argc: the number of arguments
* @argv: an array of pointers to the arguments
*
* Return: 0 on success, 98 on error
*/
int main(int argc, char **argv)
{
/* Check for the correct number of arguments */
if (argc != 3)
print_error();

/* Call multiply_numbers with the arguments */
multiply_numbers(argv[1], argv[2]);

return (0);
}
