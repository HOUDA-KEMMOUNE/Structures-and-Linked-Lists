#include "my_lib.h"

void	add_at_end(t_node *head, int new_data)
{
	t_node *ptr;
	t_node *tail;

	tail = (t_node *)malloc(sizeof(t_node));
	tail->data = new_data;
	tail->next = NULL;

	ptr = head;

	if (head == NULL)
		printf("Empty linked list :/\n");
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = tail;
}
