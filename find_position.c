#include "push_swap.h"

int	find_position(t_stack *s, int index_to_find)
{
	t_node	*tmp;
	int		pos;

	pos = 0;
	tmp = s->top;
	while (tmp)
	{
		if (tmp->index == index_to_find)
			return (pos);
		pos++;
		tmp = tmp->next;
	}
	return (-1);
}
