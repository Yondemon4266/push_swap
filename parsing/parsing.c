/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbichet <mbichet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 17:14:27 by aluslu            #+#    #+#             */
/*   Updated: 2025/12/18 11:52:53 by mbichet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	is_duplicate_instack(t_stack *stack_a)
{
	int	i;
	int	j;

	i = 0;
	while (i < stack_a->index_top)
	{
		j = i + 1;
		while (j <= stack_a->index_top)
		{
			if (stack_a->array[i] == stack_a->array[j])
			{
				free(stack_a->array);
				free(stack_a->ranks);
				ft_putendl_fd("Error", 2);
				exit(EXIT_FAILURE);
			}
			j++;
		}
		i++;
	}
}

static void	verify_input(char **av, int ac)
{
	int	i;
	int	j;

	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			if (ft_isdigit(av[i][j]) || ft_isspace(av[i][j])
				|| (ft_plus_or_minus(av[i][j]) && ft_isdigit(av[i][j + 1])))
				j++;
			else
			{
				ft_putendl_fd("Error input incorrect", 2);
				exit(EXIT_FAILURE);
			}
		}
		i++;
	}
}

static void	ranked_array(t_stack *a)
{
	int	nb;
	int	i;
	int	j;
	int	rank;

	i = 0;
	while (i <= a->index_top)
	{
		j = 0;
		rank = 0;
		nb = a->array[i];
		while (j <= a->index_top)
		{
			if (nb > a->array[j])
				rank++;
			j++;
		}
		a->ranks[i] = rank;
		i++;
	}
}

t_stack	manage_input(char **av, int ac)
{
	char	*joined_str;
	char	**splitted;
	t_stack	stack_a;

	verify_input(av, ac);
	joined_str = join_strings(av, ac);
	splitted = ft_split(joined_str, " \n");
	if (!splitted)
	{
		free(joined_str);
		ft_putendl_fd("Error", 2);
		exit(EXIT_FAILURE);
	}
	stack_a.index_top = get_top_index(splitted);
	if (stack_a.index_top == 0)
	{
		free(splitted);
		exit(EXIT_SUCCESS);
	}
	str_arrayto_int(splitted, &stack_a);
	ranked_array(&stack_a);
	is_duplicate_instack(&stack_a);
	return (stack_a);
}
