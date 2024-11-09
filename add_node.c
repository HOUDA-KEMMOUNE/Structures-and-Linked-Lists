#include "my_lib.h"

struct s_node	*add_node(t_node *ptr, int new_data)
{
	t_node *tail;

	tail = (t_node *)malloc(sizeof(t_node));
	tail->data = new_data;
	tail->next = NULL;

	ptr->next = tail;
	return (tail);
}
