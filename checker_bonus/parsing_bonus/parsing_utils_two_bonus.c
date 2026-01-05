/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_utils_two_bonus.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluslu <aluslu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 10:46:12 by mbichet           #+#    #+#             */
/*   Updated: 2026/01/04 18:56:13 by aluslu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

void	exit_str_to_int(t_stack *stack_a, char **str)
{
	free(stack_a->array);
	free(stack_a->ranks);
	free_str_array(str);
	ft_putendl_fd("Error ", 2);
	exit(EXIT_FAILURE);
}
