/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaseaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/21 13:48:59 by mcaseaux          #+#    #+#             */
/*   Updated: 2017/07/21 15:25:09 by mcaseaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list *marcel;

	marcel = begin_list;
	while (marcel != 0)
	{
		if ((*cmp)(marcel->data, data_ref) == 0)
			return (marcel);
		marcel = marcel->next;
	}
	return (0);
}
