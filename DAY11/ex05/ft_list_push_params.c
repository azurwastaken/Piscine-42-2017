/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaseaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/21 00:38:42 by mcaseaux          #+#    #+#             */
/*   Updated: 2017/07/23 16:23:40 by mcaseaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*first;
	t_list	*jo;

	first = NULL;
	jo = NULL;
	i = 0;
	while (i < ac)
	{
		first = ft_create_elem(av[i]);
		first->next = jo;
		jo = first;
		i++;
	}
	return (first);
}
