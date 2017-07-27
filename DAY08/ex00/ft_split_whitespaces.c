/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaseaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 16:37:12 by mcaseaux          #+#    #+#             */
/*   Updated: 2017/07/19 09:11:14 by mcaseaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_countword(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	while (str[i] != '\0')
	{
		j++;
		while (!(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
				&& str[i] != '\0')
			i++;
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
	}
	return (j);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	**ft_memory(char *str)
{
	int		i;
	int		wordcunt;
	char	**xd;

	i = 0;
	wordcunt = ft_countword(str);
	xd = malloc(sizeof(char *) * (ft_countword(str) + 1));
	while (i < wordcunt)
	{
		xd[i] = malloc(sizeof(char) * (ft_strlen(str) + 1));
		i++;
	}
	return (xd);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		j;
	int		k;
	char	**split_tab;

	split_tab = ft_memory(str);
	i = 0;
	k = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	while ((k < ft_countword(str)))
	{
		j = 0;
		while (str[i] != ' ' && str[i] != '\n' && str[i] != '\t'
				&& str[i] != '\0')
		{
			split_tab[k][j++] = str[i++];
		}
		split_tab[k][j++] = '\0';
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		k++;
	}
	split_tab[k] = 0;
	return (split_tab);
}
