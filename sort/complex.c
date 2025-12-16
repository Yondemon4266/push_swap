#include "../push_swap.h"


int	count_binary_size(int nb)
{
	int	count;

	count = 0;
	if (nb <= 0)
		return (0);
	while (nb != 0)
	{
		nb /= 2;
		count++;
	}
	return (count);
}

int complex(t_stack *a, t_stack *b)
{
	int size;
    int i;
    int j;
	int	limit;
	
	limit = a->index_top;
	size = count_binary_size(a->index_top);
    i = 0;
    while (i < size)
    {
        j = 0;
		while (j <= limit)
		{
			if (!((a->ranks[a->index_top] >> i) & 1))
			{
				pb(a, b);
				ft_putendl_fd("pb", 1);
			}
			else
			{
				ra(a);
				ft_putendl_fd("ra", 1);
			}
			j++;
		}
		while (b->index_top != -1)
		{
			pa(a, b);
			ft_putendl_fd("pa", 1);
		}
        i++;
    }
    return (0);
}

