/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   complex.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluslu <aluslu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 12:04:11 by mbichet           #+#    #+#             */
/*   Updated: 2025/12/16 09:47:23 by aluslu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"


static int dispach(t_stack *a, t_stack *b, int masque)
{
	int i;
	
	i = a->index_top + 1;
	while (i)
	{
		if (a->array[a->index_top] & masque)
			ra(a);
		else
			pb(a,b);
		i--;
	}
	i = b->index_top + 1;
	while(i--)
		pa(a,b);
	i = a->index_top;
	while (i)
	{
		if (a->array[i] > a->array[i - 1])
			return (0);
		i--;
	}
	return (2);
}


int radix(t_stack *a, t_stack *b)
{
	int masque;
	int i;
	
	masque = 1;
	i = 0;
	while (i == 0)
	{
		i = dispach(a,b,masque);
		masque = masque << 1;
	}
	return (0);
}