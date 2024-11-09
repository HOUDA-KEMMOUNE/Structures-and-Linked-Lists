#include "my_lib.h"

int main()
{
	t_node *head;
	t_node *tail;

	head = (t_node *)malloc(sizeof(t_node));
	head->data = 44;
	head->next = NULL;

	tail = head;
	tail = add_node(tail, 15);
	tail = add_node(tail, 24);
	tail = add_node(tail, 88);
	count_node(head);
	print_node(head);
	tail = NULL;
	free(tail);
}

