#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node_end - Adds a new node at the end of a linked list_t list.
* @head: Double pointer to the head of the list.
* @str: String to be added to the new node.
*
* Return: Address of the new element, or NULL if it failed.
*/

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node, *last;

if (str == NULL)
return (NULL);

new_node = (list_t *)malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);

new_node->str = (char *)malloc(sizeof(char) * (strlen(str) + 1));
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}

strcpy(new_node->str, str);
new_node->len = strlen(str);
new_node->next = NULL;

if (*head == NULL)
{
*head = new_node;
return (new_node);
}

last = *head;
while (last->next != NULL)
last = last->next;

last->next = new_node;

return (new_node);
}
