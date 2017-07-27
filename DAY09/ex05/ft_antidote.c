/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaseaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 00:07:09 by mcaseaux          #+#    #+#             */
/*   Updated: 2017/07/14 00:24:52 by mcaseaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int tmp;
	int i;
	int j;

	i = 0;
	j = i + 1;
	while (i < size - 1)
	{
		while (j < size)
		{
			if (tab[i] > tab[j])
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

int		ft_antidote(int i, int j, int k)
{
	int res[3];

	res[0] = i;
	res[1] = j;
	res[2] = k;
	ft_sort_integer_table(res, 3);
	return (res[1]);
}
