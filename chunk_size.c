#include "push_swap.h"

int	get_chunk_size(int total_size)
{
	if (total_size <= 10)
		return (total_size);
	else if (total_size <= 100)
		return (20);
	else if (total_size <= 250)
		return (30);
	return (35);
}
