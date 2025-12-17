/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluslu <aluslu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 17:15:26 by aluslu            #+#    #+#             */
/*   Updated: 2025/12/16 19:37:11 by aluslu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	count_size_str(char **av, int ac)
{
	int	i;
	int	j;
	int	size;

	i = 0;
	size = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			size++;
			j++;
		}
		size++;
		i++;
	}
	return (size);
}

int	get_top_index(char **tab)
{
	int	size;

	size = 0;
	while (tab[size] != NULL)
		size++;
	return (size - 1);
}

void	fill_string(char *joined_str, char **av, int ac)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
			joined_str[k++] = av[i][j++];
		joined_str[k++] = ' ';
		i++;
	}
	joined_str[k] = '\0';
}

char	*join_strings(char **av, int ac)
{
	char	*joined_str;
	int		size;

	size = count_size_str(av, ac);
	joined_str = (char *)malloc(sizeof(char) * (size + 1));
	if (!joined_str)
	{
		ft_putendl_fd("Error malloc joined_str", 2);
		exit(EXIT_FAILURE);
	}
	fill_string(joined_str, av, ac);
	return (joined_str);
}

void	str_arrayto_int(char **str, t_stack *stack_a)
{
	int			i;
	long long	nb;

	i = 0;
	stack_a->array = (int *)malloc(sizeof(int) * (stack_a->index_top + 1));
	stack_a->ranks = (int *)malloc(sizeof(int) * (stack_a->index_top + 1));
	if (!stack_a->array || !stack_a->ranks)
	{
		free(stack_a->array);
		free(stack_a->ranks);
		free_str_array(str);
		ft_putendl_fd("Error malloc stack a array or ranks", 2);
		exit(EXIT_FAILURE);
	}
	while (str[i] != NULL)
	{
		nb = ft_atoi(str[i]);
		if (nb > INT_MAX || nb < INT_MIN)
		{
			ft_putendl_fd("Error stack over/underflow", 2);
			exit(EXIT_FAILURE);
		}
		stack_a->array[stack_a->index_top - i] = nb;
		i++;
	}
}
