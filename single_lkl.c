#include <stdio.h>
#include <stdlib.h>

typedef struct		s_node
{
	int				data;
	struct s_node 	*next;
}					t_node;

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
	count_node(head);
	print_node(head);
}
