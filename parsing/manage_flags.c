/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_flags.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbichet <mbichet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 17:12:34 by aluslu            #+#    #+#             */
/*   Updated: 2025/12/18 12:40:28 by mbichet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	is_valid_flag(char *flag)
{
	if (ft_strcmp(flag, "--simple") == 0)
		return (1);
	else if (ft_strcmp(flag, "--medium") == 0)
		return (1);
	else if (ft_strcmp(flag, "--complex") == 0)
		return (1);
	else if (ft_strcmp("--adaptive", flag) == 0)
		return (1);
	else if (ft_strcmp("--bench", flag) == 0)
		return (1);
	else
	{
		ft_putendl_fd("Error", 2);
		exit(EXIT_FAILURE);
		return (0);
	}
}

void	manage_flag(char *flag, enum e_strategy *strategy, int *bench)
{
	if (ft_strcmp(flag, "--simple") == 0)
		*strategy = SIMPLE;
	else if (ft_strcmp(flag, "--medium") == 0)
		*strategy = MEDIUM;
	else if (ft_strcmp(flag, "--complex") == 0)
		*strategy = COMPLEX;
	else if (ft_strcmp("--adaptive", flag) == 0)
		*strategy = ADAPTIVE;
	else if (ft_strcmp("--bench", flag) == 0)
		*bench = 1;
	else
	{
		ft_putendl_fd("Error", 2);
		exit(EXIT_FAILURE);
	}
}
