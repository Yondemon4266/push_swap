/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluslu <aluslu@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 18:46:09 by aluslu            #+#    #+#             */
/*   Updated: 2025/11/13 12:08:26 by aluslu           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp;

	if (!lst)
		return (NULL);
	tmp = lst;
	while (tmp->next)
		tmp = tmp->next;
	return (tmp);
}

/*#include <stdio.h>

int	main(void)
{
	t_list *l;
	t_list *expected;
	t_list *actual;

	l = ft_lstnew(ft_strdup("1"));
	l->next = ft_lstnew(ft_strdup("2"));
	l->next->next = ft_lstnew(ft_strdup("3"));
	expected = l->next->next;
	actual = ft_lstlast(l);
	if (actual == expected)
		printf("TEST_SUCCESS");
	else
		printf("TEST_FAILED");
}*/