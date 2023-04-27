#include <stdlib.h>
#include "lists.h"
/**
* free_list - frees list_t
* @head: linked list , list_t
*/


void free_list(list_t *head)
{
list_t *current, *next;

current = head;
while (current != NULL)
{
next = current->next;
free(current->str);
free(current);
current = next;
}
}
