/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaseaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/21 01:01:47 by mcaseaux          #+#    #+#             */
/*   Updated: 2017/07/23 17:31:11 by mcaseaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_clear(t_list **begin_list)
{
	t_list	*atm;
	t_list	*tmp;

	atm = *begin_list;
	while (atm)
	{
		tmp = atm->next;
		free(atm);
		atm = tmp;
	}
	*begin_list = NULL;
}
