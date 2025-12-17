/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluslu <aluslu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 10:44:02 by aluslu            #+#    #+#             */
/*   Updated: 2025/12/17 12:16:33 by aluslu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	is_valid_format(char c)
{
	ssize_t		i;	
	const char	format[10] = "cspdiuxX%";

	i = 0;
	while (format[i])
	{
		if (format[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static void	treat_format(char c, va_list arguments, int *count)
{
	if (c == 'c')
		*count += ft_putcharl(va_arg(arguments, int));
	else if (c == 's')
		*count += ft_putstrl(va_arg(arguments, char *));
	else if (c == 'p')
		*count += ft_print_pointer(va_arg(arguments, void *));
	else if (c == 'd' || c == 'i')
		*count += ft_putnbrl(va_arg(arguments, int));
	else if (c == 'u')
		*count += ft_unsigned_putnbrl(va_arg(arguments, unsigned int));
	else if (c == 'x' || c == 'X')
		*count += ft_putnbrl_hexa(va_arg(arguments, unsigned int), c);
	else if (c == '%')
		*count += ft_putcharl('%');
}

int	ft_printf(const char *str, ...)
{
	va_list		arguments;
	ssize_t		i;
	int			count;

	if (!str)
		return (0);
	va_start(arguments, str);
	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == '%' && is_valid_format(str[i + 1]))
		{
			i++;
			treat_format(str[i], arguments, &count);
		}
		else
			count += ft_putcharl(str[i]);
		i++;
	}
	va_end(arguments);
	return (count);
}
