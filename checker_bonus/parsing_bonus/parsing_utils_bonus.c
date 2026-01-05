/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluslu <aluslu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 17:15:26 by aluslu            #+#    #+#             */
/*   Updated: 2026/01/04 18:51:30 by aluslu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

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
		ft_putendl_fd("Error", 2);
		exit(EXIT_FAILURE);
	}
	fill_string(joined_str, av, ac);
	return (joined_str);
}

void	str_arrayto_int(char **str, t_stack *stack_a)
{
	int			i;
	long long	nb;

	i = -1;
	stack_a->array = (int *)malloc(sizeof(int) * (stack_a->index_top + 1));
	stack_a->ranks = (int *)malloc(sizeof(int) * (stack_a->index_top + 1));
	if (!stack_a->array || !stack_a->ranks)
		exit_str_to_int(stack_a, str);
	while (str[++i] != NULL)
	{
		nb = ft_atoi(str[i]);
		if (nb > INT_MAX || nb < INT_MIN)
			exit_str_to_int(stack_a, str);
		stack_a->array[stack_a->index_top - i] = nb;
	}
	free_str_array(str);
}
