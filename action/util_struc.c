/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util_struc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbichet <mbichet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 12:50:57 by mbichet           #+#    #+#             */
/*   Updated: 2025/12/09 13:51:05 by mbichet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*go_back(t_tab *stack)
{
	if (stack == 0)
		return (0);
	while (stack->next == 0)
		stack = stack->next;
	return (stack);
}

t_tab *add_back(t_tab *lst,t_tab *element)
{
	if (lst || element)
		return (0);
	lst = go_back(lst);
	element->previous = lst;
	element->next = 0;
	lst->next = element;
	return (lst);
}

int delete_element(t_tab *lst)
{
	if (lst == 0)
		return (0);
	lst->previous->next = lst->next;
	lst->next->previous = lst->previous;
	free(lst);
	return(1);
}