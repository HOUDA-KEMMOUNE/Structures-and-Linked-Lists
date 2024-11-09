#include "my_lib.h"

int main()
{
	t_node *head = NULL;
	t_node *tail = NULL;

	head = (t_node *)malloc(sizeof(t_node));
	tail = (t_node *)malloc(sizeof(t_node));

	head->data = 44;
	head->next = NULL;

	tail->data = 52;
	tail->next = NULL;
	head->next = tail;

	tail = NULL;
	tail = (t_node *)malloc(sizeof(t_node));

	tail->data = 75;
	tail->next = NULL;
	head->next->next = tail;
	//count_node(head);	
	tail = NULL;
	free(tail);
	add_at_end(head, 50);
	count_node(head);
	print_node(head);
}

