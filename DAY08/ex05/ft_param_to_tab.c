/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaseaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 10:44:36 by mcaseaux          #+#    #+#             */
/*   Updated: 2017/07/19 11:27:56 by mcaseaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

char					*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int						ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char					*ft_strdup(char *src)
{
	char *mem_alloc;

	if (!src)
		return (0);
	else
	{
		mem_alloc = (char *)malloc(sizeof(*src) * (ft_strlen(src) + 1));
		mem_alloc = ft_strcpy(mem_alloc, src);
	}
	return (mem_alloc);
}

struct s_stock_par		*ft_param_to_tab(int argc, char **argv)
{
	t_stock_par *tab;
	int			i;

	i = 0;
	while (i < argc)
	{
		tab[i].size_param = ft_strlen(argv[i]);
		tab[i].str = argv[i];
		tab[i].copy = ft_strdup(argv[i]);
		tab[i].tab = ft_split_whitespace(argv[i]);
		i++;
	}
	tab[i].str = 0;
	return (tab);
}
