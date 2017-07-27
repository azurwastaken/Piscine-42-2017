/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaseaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/21 10:10:57 by mcaseaux          #+#    #+#             */
/*   Updated: 2017/07/23 20:43:47 by mcaseaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list				*marcel;
	unsigned int		i;

	i = 0;
	if (!begin_list)
		return (NULL);
	marcel = begin_list;
	while (i < nbr)
	{
		if (marcel->next)
			marcel = marcel->next;
		else
			return (NULL);
		i = i + 1;
	}
	return (marcel);
}
