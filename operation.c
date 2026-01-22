#include "push_swap.h"

void	pb(t_stack *a, t_stack *b)
{
	int	value;

	value = ft_pop(a);
	if (value != -1)
		ft_push(b, value);
	write(1, "pb\n", 3);
}

void	ra_b(t_stack *a)
{
	t_node	*first;
	t_node	*tmp;

	if (!a->top || !a->top->next)
		return ;
	tmp = a->top;
	first = a->top;
	while (tmp->next)
		tmp = tmp->next;
	a->top = first->next;
	tmp->next = first;
	first->next = NULL;
}

void	ra(t_stack *a)
{
	ra_b(a);
	write(1, "ra\n", 3);
}

void	rb(t_stack *b)
{
	ra_b(b);
	write(1, "rb\n", 3);
}

void	pa(t_stack *a, t_stack *b)
{
	int	value;

	value = ft_pop(b);
	if (value != -1)
		ft_push(a, value);
	write(1, "pa\n", 3);
}
