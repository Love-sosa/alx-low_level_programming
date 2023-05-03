#include "lists.h"

/**
* find_listint_loop - finds the loop in a linked list
* @head: linked list to search for
*
* Return: address of the node where the loop starts, or NULL
*/

listint_t *find_listint_loop(listint_t *head)
{
listint_t *slow, *fast;

if (head == NULL)
return (NULL);

slow = head;
fast = head;

while (fast != NULL && fast->next != NULL)
{
slow = slow->next;
fast = fast->next->next;

if (slow == fast)
{
/* There is a loop in the list */
slow = head;

while (slow != fast)
{
slow = slow->next;
fast = fast->next;
}

/* Now slow and fast point to the start of the loop */
return (slow);
}
}

/* No loop found */
return (NULL);
}
