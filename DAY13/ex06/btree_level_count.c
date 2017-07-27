/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaseaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 21:03:47 by mcaseaux          #+#    #+#             */
/*   Updated: 2017/07/26 00:15:55 by mcaseaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int	ft_comp_int(int a, int b)
{
	return ((a >= b) ? a : b);
}

int	ft_size(t_btree *root, int lenght)
{
	if (!root)
		return (lenght);
	else
		return (ft_comp_int(ft_size(root->left, lenght + 1),
					ft_size(root->right, lenght + 1)));
}

int	btree_level_count(t_btree *root)
{
	if (!root)
		return (0);
	return (ft_size(root, 0));
}
