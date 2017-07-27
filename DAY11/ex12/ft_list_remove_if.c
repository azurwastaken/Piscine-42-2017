/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaseaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/21 14:10:49 by mcaseaux          #+#    #+#             */
/*   Updated: 2017/07/21 14:57:24 by mcaseaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*lacrim;
	t_list	*jo;
	t_list	*david;

	lacrim = *begin_list;
	jo = lacrim;
	if (!*begin_list)
		return (NULL);
	while (lacrim != 0)
	{
		david = lacrim
		if (cmp(lacrim->data, data_ref) == 0)
		{
			while (cmp(lacrim->data, data_ref) == 0)
			{
				if (lacrim->next != 0)
					jo = lacrim->next;
					free(lacrim);
				if (jo != lacrim)
					lacrim = jo;
			}
		}
	}
}
