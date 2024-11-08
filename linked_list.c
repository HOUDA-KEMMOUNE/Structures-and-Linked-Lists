#include <stdio.h>
#include <stdlib.h>

typedef struct		s_node
{
	int 			data;
	struct s_node 	*next;
}					t_node;
/*
int	main()
{
	t_node *head = NULL;
	head = (t_node *)malloc(sizeof(t_node));

	head->data = 44;
	head->next = NULL;

	printf("The data of our node is:\t%d\n", head->data);
}
*/
