/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluslu <aluslu@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 18:48:29 by aluslu            #+#    #+#             */
/*   Updated: 2025/11/12 19:04:30 by aluslu           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (*lst == NULL)
		*lst = new;
	else
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
		t_list *l = ((void*)0);
		t_list *n = ft_lstnew(ft_strdup("OK"));

		ft_lstadd_back(&l, n);
		if (l == n && !strcmp(l->content, "OK"))
		{
				free(l->next);
				free(l);
				printf("TEST_SUCCESS");
				return (1);
		}
		free(l->next);
		free(l);
		printf("TEST_FAILED");
}*/
