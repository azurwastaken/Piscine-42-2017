/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaseaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 21:03:49 by mcaseaux          #+#    #+#             */
/*   Updated: 2017/07/19 22:16:25 by mcaseaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
			return (0);
		i++;
	}
	if (s1[i] < s2[i])
		return (-1);
	if (s1[i] > s2[i])
		return (1);
	return (0);
}

void	sort_table(char **tab)
{
	char	*tmp;
	int		i;
	int		j;
	int		len;

	len = 0;
	while (tab[len])
		len++;
	i = 0;
	j = i + 1;
	while (i < len - 1)
	{
		while (j < len)
		{
			if (!(ft_strcmp(tab[i], tab[j]) < 0))
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i = i + 1;
		j = i + 1;
	}
}
