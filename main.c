/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluslu <aluslu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 17:05:56 by aluslu            #+#    #+#             */
/*   Updated: 2025/12/17 13:56:36 by aluslu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	init_bench_infos(t_bench_infos *infos)
{
	infos->disorder = 0.00;
	infos->strategy = ADAPTIVE;
	infos->bench = 0;
	infos->total_ops = 0;
	infos->sa_count = 0;
	infos->sb_count = 0;
	infos->ss_count = 0;
	infos->pa_count = 0;
	infos->pb_count = 0;
	infos->ra_count = 0;
	infos->rb_count = 0;
	infos->rr_count = 0;
	infos->rra_count = 0;
	infos->rrb_count = 0;
	infos->rrr_count = 0;
}

static t_stack	init_empty_stack(int size)
{
	t_stack stack;
	stack.array = (int *) malloc(sizeof(int) * size);
	stack.ranks = (int *) malloc(sizeof(int) * size);
	stack.index_top = -1;
	return (stack);
}

static float	compute_disorder(t_stack stack_a)
{
	float	mistakes;
	float	total_pairs;
	int	i;
	int	j;

	mistakes = 0;
	total_pairs = 0;
	i = 0;
	j = 0;
	while (i < stack_a.index_top)
	{
		j = i + 1;
		while (j <= stack_a.index_top)
		{
			total_pairs += 1;
			if (stack_a.array[i] < stack_a.array[j])
				mistakes += 1;
			j++;
		}
		i++;
	}
	return (mistakes / total_pairs);
}

void static choosing_sort_function(t_bench_infos *infos, t_stack *a, t_stack *b)
{
	if (infos->disorder == 0)
		return ;
	else if (infos->strategy == ADAPTIVE && (infos->disorder < 0.20))
		simple(a, infos);
	else if (infos->strategy == ADAPTIVE && (infos->disorder >= 0.20 
		&& infos->disorder < 0.50))
		medium(a, b, infos);
	else if (infos->strategy == ADAPTIVE && (infos->disorder >= 0.50))
		complex(a, b, infos);
	else if (infos->strategy == SIMPLE)
		simple(a, infos);
	else if (infos->strategy == MEDIUM)
		medium(a, b, infos);
	else if (infos->strategy == COMPLEX)
		complex(a, b, infos);
}

int	main(int ac, char **av)
{
	if (ac >= 2)
	{
		int i;
		t_stack stack_a;
		t_stack stack_b;
		t_bench_infos infos;

		init_bench_infos(&infos);
        i = 1;
        while (ft_strncmp(av[i], "--", 2) == 0 && is_valid_flag(av[i]))
            manage_flag(av[i++], &infos.strategy, &infos.bench);
        stack_a = manage_input(av + i, ac - i);
		stack_b = init_empty_stack(stack_a.index_top + 1);
		infos.disorder = compute_disorder(stack_a);
		choosing_sort_function(&infos, &stack_a, &stack_b);
		// int j;
        // j = stack_a.index_top;
        // while (j >= 0)
        // {
        //     ft_printf("%d\n", stack_a.array[j]);
        //     j--;
        // }
		if (infos.bench == 1)
			display_bench(infos);
    }
}