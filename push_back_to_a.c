#include "push_swap.h"

void	push_back_to_a(t_stack *a, t_stack *b)
{
	int	max_index;
	int	position;

	while (stack_size(b) > 0)
	{
		max_index = find_max_index(b);
		position = find_position(b, max_index);
		move_to_top_b(b, position);
		pa(a, b);
	}
}
