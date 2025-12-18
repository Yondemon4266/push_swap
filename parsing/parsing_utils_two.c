/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_utils_two.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbichet <mbichet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 10:46:12 by mbichet           #+#    #+#             */
/*   Updated: 2025/12/18 11:52:28 by mbichet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	exit_str_to_int(t_stack *stack_a, char **str)
{
	free(stack_a->array);
	free(stack_a->ranks);
	free_str_array(str);
	ft_putendl_fd("Error ", 2);
	exit(EXIT_FAILURE);
}
