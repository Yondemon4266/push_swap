/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluslu <aluslu@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 13:07:36 by aluslu            #+#    #+#             */
/*   Updated: 2025/11/13 17:14:37 by aluslu           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total_size;
	size_t	i;

	if (size > 0 && nmemb > (SIZE_MAX / size))
		return (NULL);
	total_size = nmemb * size;
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < total_size)
	{
		((unsigned char *)ptr)[i] = 0;
		i++;
	}
	return (ptr);
}

/*int	main(int ac, char **av)
{
	if (ac == 3)
	{
		char	*ptr;
		ptr = ft_calloc(ft_atoi(av[1]), ft_atoi(av[2]));
		free(ptr);
	}

}*/
