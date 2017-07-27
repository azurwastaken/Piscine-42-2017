/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaseaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/21 13:32:41 by mcaseaux          #+#    #+#             */
/*   Updated: 2017/07/21 15:23:13 by mcaseaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list,
		void (*f)(void *), void *data_ref, int (*cmp)())
{
	t_list *marcel;

	marcel = begin_list;
	while (marcel != 0)
	{
		if ((*cmp)(marcel->data, data_ref) == 0)
			(*f)(marcel->data);
		marcel = marcel->next;
	}
}
