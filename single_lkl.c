#include <stdio.h>
#include <stdlib.h>

typedef struct		s_node
{
	int				data;
	struct s_node 	*next;
}					t_node;
/*
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

	printf("The data of the first node:\t%d\n", head->data);
	printf("The data of the second node:\t%d\n", tail->data);	
}
*/
