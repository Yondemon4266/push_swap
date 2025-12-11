/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluslu <aluslu@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 16:34:56 by aluslu            #+#    #+#             */
/*   Updated: 2025/12/10 16:34:57 by aluslu           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_charset(char c, char *charset)
{
	int	i;

	i = 0;
	if (!charset[0])
		return (0);
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

static int	ft_word_len(char *str, char *charset, int offset)
{
	int	len;
	int	i;

	i = 0;
	len = 0;
	while (str[offset + i] && !ft_is_charset(str[offset + i], charset))
	{
		i++;
		len++;
	}
	return (len);
}

static int	ft_count_word(char *str, char *charset)
{
	int	i;
	int	wc;

	wc = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] && !ft_is_charset(str[i], charset))
		{
			while (str[i] && !ft_is_charset(str[i], charset))
				i++;
			wc++;
		}
		i++;
	}
	return (wc);
}

static char	**ft_splitter(char *str, char *charset, char **result)
{
	int	i;
	int	j;
	int	k;

	j = 0;
	i = -1;
	while (str[++i])
	{
		if (str[i] && !ft_is_charset(str[i], charset))
		{
			result[j] = malloc(ft_word_len(str, charset, i) * sizeof(char) + 1);
			if (!result[j])
			{
				while (j)
					free(result[--j]);
				return (free(result), (NULL));
			}
			k = 0;
			while (str[i] && !ft_is_charset(str[i], charset))
				result[j][k++] = str[i++];
			result[j++][k] = '\0';
		}
	}
	result[j] = NULL;
	return (result);
}

char	**ft_split(char *str, char *charset)
{
	char	**res;

	res = malloc((ft_count_word(str, charset) + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	res = ft_splitter(str, charset, res);
	if (!res)
		return (NULL);
	return (res);
}

/*int	main(int ac, char **av)
{
	char	**array;
	int	i;

	if (ac == 3)
	{
		i = 0;
		array = NULL;
		array = ft_split(av[1], av[2]);
		while (array[i] != NULL)
		{
			__builtin_printf("%s\n", array[i]);
			free(array[i]);
			i++;
		}
		free(array);
	}
	return (0);
}*/
