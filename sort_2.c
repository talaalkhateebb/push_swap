#include "push_swap.h"

void	sort_2(t_stack *s)
{
	int	first;
	int	second;

	first = s->top->index;
	second = s->top->next->index;
	if (first > second)
		sa(s);
}
