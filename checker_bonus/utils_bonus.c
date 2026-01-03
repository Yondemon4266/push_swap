/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluslu <aluslu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 17:32:46 by aluslu            #+#    #+#             */
/*   Updated: 2026/01/03 18:15:17 by aluslu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void    error_line_exit(char *line, t_stack *a, t_stack *b)
{
    free(line);
    free_stack(a, b);
    ft_putendl_fd("Error", 2);
    exit(EXIT_FAILURE);
}