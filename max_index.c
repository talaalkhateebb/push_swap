#include "push_swap.h"

int	find_max_index(t_stack *s)
{
	t_node	*tmp;
	int		max;

	tmp = s->top;
	if (!tmp)
		return (-1);
	max = tmp->index;
	while (tmp)
	{
		if (tmp->index > max)
			max = tmp->index;
		tmp = tmp->next;
	}
	return (max);
}
