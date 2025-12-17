/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_last.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluslu <aluslu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 16:27:25 by aluslu            #+#    #+#             */
/*   Updated: 2025/12/17 12:51:28 by aluslu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_print_pointer(void *ptr)
{
	int	count;

	count = 0;
	if (!ptr)
	{
		count += ft_putstrl("(nil)");
		return (count);
	}
	count += ft_putstrl("0x");
	count += ft_putnbrl_hexa((uintptr_t)ptr, 'x');
	return (count);
}

char	*ft_strcpy(char *dest, const char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}