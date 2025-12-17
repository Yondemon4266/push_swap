/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluslu <aluslu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 16:27:15 by aluslu            #+#    #+#             */
/*   Updated: 2025/12/17 13:21:36 by aluslu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_putcharl(int c)
{
	write(2, &c, 1);
	return (1);
}

int	ft_putstrl(char *s)
{
	int	i;

	i = 0;
	if (s)
	{
		while (s[i])
		{
			write(2, &s[i], 1);
			i++;
		}
	}
	else
	{
		i += ft_putstrl("(null)");
	}
	return (i);
}

int	ft_putnbrl(int nb)
{
	int	count;

	count = 0;
	if (nb < 0)
	{
		if (nb == INT_MIN)
		{
			count += ft_putstrl("-2147483648");
			return (count);
		}
		nb = -nb;
		count += ft_putcharl('-');
	}
	if (nb >= 0 && nb <= 9)
		count += ft_putcharl((nb % 10) + '0');
	if (nb > 9)
	{
		count += ft_putnbrl(nb / 10);
		count += ft_putcharl((nb % 10) + '0');
	}
	return (count);
}

int	ft_unsigned_putnbrl(unsigned int nb)
{
	int	count;

	count = 0;
	if (nb >= 0 && nb <= 9)
		count += ft_putcharl((nb % 10) + '0');
	if (nb > 9)
	{
		count += ft_putnbrl(nb / 10);
		count += ft_putcharl((nb % 10) + '0');
	}
	return (count);
}

int	ft_putnbrl_hexa(uintptr_t nb, char c)
{
	int			count;
	const char	base[17] = "0123456789abcdef";
	const char	base_up[17] = "0123456789ABCDEF";

	count = 0;
	if (nb >= 0 && nb <= 15)
	{
		if (c == 'X')
			count += ft_putcharl(base_up[nb % 16]);
		else
			count += ft_putcharl(base[nb % 16]);
	}
	if (nb > 15)
	{
		count += ft_putnbrl_hexa(nb / 16, c);
		if (c == 'X')
			count += ft_putcharl(base_up[nb % 16]);
		else
			count += ft_putcharl(base[nb % 16]);
	}
	return (count);
}
