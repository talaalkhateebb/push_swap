#include "push_swap.h"

int	is_sorted(t_stack *s)
{
	t_node	*tmp;

	if (!s || !s->top)
		return (1);
	tmp = s->top;
	while (tmp->next)
	{
		if (tmp->data > tmp->next->data)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}
