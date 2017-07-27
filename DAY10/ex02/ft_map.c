/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaseaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 15:06:12 by mcaseaux          #+#    #+#             */
/*   Updated: 2017/07/20 09:12:47 by mcaseaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *tabret;

	if (!tab)
		return (0);
	i = 0;
	tabret = (int *)malloc(sizeof(int) * (length + 2));
	while (i < length)
	{
		tabret[i] = f(tab[i]);
		i++;
	}
	return (tabret);
}
