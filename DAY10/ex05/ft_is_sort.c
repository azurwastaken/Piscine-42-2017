/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaseaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 16:47:20 by mcaseaux          #+#    #+#             */
/*   Updated: 2017/07/20 11:57:43 by mcaseaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int croissant;
	int decroissant;

	i = 0;
	croissant = 0;
	decroissant = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			decroissant = 1;
		i++;
	}
	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) < 0)
			croissant = 1;
		i++;
	}
	return ((decroissant ^ croissant) ? 1 : 0);
}
