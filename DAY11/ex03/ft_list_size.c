/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaseaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 18:43:57 by mcaseaux          #+#    #+#             */
/*   Updated: 2017/07/21 15:08:24 by mcaseaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int i;

	i = 1;
	if (begin_list == 0)
		return (0);
	while (begin_list->next)
	{
		begin_list = begin_list->next;
		i++;
	}
	return (i);
}
