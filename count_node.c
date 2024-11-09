#include "my_lib.h"

void	count_node(t_node *head)
{
	t_node *ptr;
	int count;

	count = 0;
	ptr = head;
	if (head == NULL)
		printf("Empty linked list :/\n");
	while (ptr != NULL )
	{
		count++;
		ptr = ptr->next;
	}
	if (count == 0 || count == 1)
		printf("We have %d node\n", count);
	else
		printf("We have %d nodes\n", count);
}

