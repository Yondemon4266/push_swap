/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluslu <aluslu@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 18:14:57 by aluslu            #+#    #+#             */
/*   Updated: 2025/12/10 18:14:58 by aluslu           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((unsigned char) s1[i] || (unsigned char) s2[i])
	{
		if ((unsigned char) s1[i] != (unsigned char) s2[i])
			return ((unsigned char) s1[i]
				- (unsigned char) s2[i]);
		i++;
	}
	if ((unsigned char) s1[i] != (unsigned char) s2[i])
		return ((unsigned char) s1[i]
			- (unsigned char) s2[i]);
	return (0);
}
