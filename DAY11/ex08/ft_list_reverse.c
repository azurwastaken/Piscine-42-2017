/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaseaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/21 10:44:58 by mcaseaux          #+#    #+#             */
/*   Updated: 2017/07/23 17:54:50 by mcaseaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list		*marcel;
	t_list		*djo;
	t_list		*david;

	if (*begin_list)
	{
		david = *begin_list;
		marcel = *begin_list;
		djo = david->next;
		marcel->next = 0;
		while (djo)
		{
			marcel = djo;
			djo = djo->next;
			marcel->next = david;
			david = marcel;
		}
		*begin_list = marcel;
	}
}
