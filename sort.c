#include "push_swap.h"

void	sort_chunks(t_stack *a, t_stack *b)
{
	int	size;

	size = stack_size(a);
	if (size <= 1)
		return ;
	else if (size == 2)
		sort_2(a);
	else if (size == 3)
		sort_3(a);
	else if (size <= 5)
		sort_5_4(a, b);
	else
	{
		push_to_b_chunks(a, b, size);
		push_back_to_a(a, b);
	}
}
