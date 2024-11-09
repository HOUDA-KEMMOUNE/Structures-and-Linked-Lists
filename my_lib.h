#ifndef MY_LIB_H
#define MY_LIB_H

#include <stdio.h>
#include <stdlib.h>

typedef struct		s_node
{
	int				data;
	struct s_node 	*next;
}					t_node;

void	count_node(t_node *head);
void	print_node(t_node *head);
void	add_at_end(t_node *head, int new_data);

#endif
