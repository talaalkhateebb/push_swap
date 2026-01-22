#include "push_swap.h"

int	stack_size(t_stack *s)
{
	int		count;
	t_node	*tmp;

	count = 0;
	tmp = s->top;
	while (tmp)
	{
		count++;
		tmp = tmp->next;
	}
	return (count);
}
