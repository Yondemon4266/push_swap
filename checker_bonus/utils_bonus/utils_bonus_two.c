/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_bonus_two.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluslu <aluslu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 19:01:51 by aluslu            #+#    #+#             */
/*   Updated: 2026/01/04 19:04:02 by aluslu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

int	free_stack(t_stack *a_stack, t_stack *b_stack)
{
	free(a_stack->array);
	free(a_stack->ranks);
	free(b_stack->array);
	free(b_stack->ranks);
	return (1);
}

void	free_str_array(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

int	ft_isspace(char c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

int	ft_plus_or_minus(char c)
{
	if (c == '-' || c == '+')
		return (1);
	return (0);
}

void	swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
