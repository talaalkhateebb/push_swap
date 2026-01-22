#include "push_swap.h"

void	assign_index(t_stack *s, int *arr, int size)
{
	t_node	*tmp;
	int		i;

	tmp = s->top;
	while (tmp)
	{
		i = 0;
		while (i < size)
		{
			if (tmp->data == arr[i])
			{
				tmp->index = i;
				break ;
			}
			i++;
		}
		tmp = tmp->next;
	}
}
