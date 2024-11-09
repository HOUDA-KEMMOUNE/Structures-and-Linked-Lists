#include "my_lib.h"

void	print_node(t_node *head)
{
	t_node *ptr;
	int i;
	
	i = 0;
	ptr = head;
	if (head == NULL)
		printf("Empty linked list :/\n");
	while (ptr != NULL)
	{	
		i++;
		printf("Data of node %d:\t%d\n", i, ptr->data);
		ptr = ptr->next;
	}
}
