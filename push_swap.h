/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbichet <mbichet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 10:11:29 by mbichet           #+#    #+#             */
/*   Updated: 2025/12/09 14:03:56 by mbichet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>
#include <stdlib.h>

typedef struct s_stack
{
	int element;
	struct s_stack *next;
	struct s_stack *previous;
	
}	t_stack;

t_stack	*go_back(t_stack *stack);
t_stack *add_back(t_stack *lst,t_stack *element);
int delete_element(t_stack *lst);

#endif