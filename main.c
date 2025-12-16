/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluslu <aluslu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 17:05:56 by aluslu            #+#    #+#             */
/*   Updated: 2025/12/16 09:58:30 by aluslu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

float	compute_disorder(t_stack stack_a)
{
	float mistakes;
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
			if (stack_a.array[i] > stack_a.array[j])
				mistakes += 1;
			j++;
		}
		i++;
	}
	return (mistakes / total_pairs);
}

int	main(int ac, char **av)
{
	if (ac >= 2)
	{
		int i;
		t_stack stack_a;
		t_stack stack_b;
		float	disorder;
		enum e_strategy strategy;
		int	bench;

        i = 1;
        if (ft_strncmp(av[i], "--", 2) == 0 && is_valid_flag(av[i]))
        {
            manage_flag(av[i]);
            i++;
        }
        stack_b.array[0] = 1;
        stack_b.index_top = -1;
        stack_a = manage_input(av + i, ac - i);
        // radix(&stack_a, &stack_b);
        buble(&stack_a);
        j = stack_a.index_top;
        while (j >= 0)
        {
            printf("%d\n", stack_a.array[j]);
            j--;
        }
    }
}