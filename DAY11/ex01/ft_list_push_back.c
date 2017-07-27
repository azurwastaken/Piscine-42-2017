/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaseaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 17:04:57 by mcaseaux          #+#    #+#             */
/*   Updated: 2017/07/21 15:06:33 by mcaseaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*new;

	if (*begin_list == 0)
		*begin_list = ft_create_elem(data);
	else
	{
		new = *begin_list;
		while (new->next)
			new = new->next;
		new->next = ft_create_elem(data);
	}
}
