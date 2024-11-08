#include <stdlib.h>
#include <stdio.h>

typedef struct 	s_user
{
	char		*name;
	int			age;
	long		id;
}				t_user;

void	print_struct(t_user *user)
{
	printf("Name:\t%s\n", user->name);
	printf("Age:\t%d\n", user->age);
	printf("ID:\t%ld\n", user->id);
}
/*
int	main()
{
	t_user user1, user2;
	//first user => user1
	user1.name = "Houda";
	user1.age = 18;
	user1.id = 41537872468857;
	//second user => user2
	user2.name = "Malak";
	user2.age = 21;
	user2.id = 68430164354891;
	//print the results
	printf("\nThe first user:\n");
	print_struct(&user1);
	printf("\nThe second user:\n");
	print_struct(&user2);
}
*/
