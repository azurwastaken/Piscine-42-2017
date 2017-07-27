/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaseaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 20:05:01 by mcaseaux          #+#    #+#             */
/*   Updated: 2017/07/26 09:41:59 by mcaseaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
		int (*cmpf)(void *, void *))
{
	t_btree *node;

	node = 0;
	if (root)
	{
		node = btree_search_item(root->left, data_ref, cmpf);
		if (cmpf(root->item, data_ref) == 0 && node == 0)
			return (root->item);
		if (node == 0)
			node = btree_search_item(root->right, data_ref, cmpf);
	}
	return (node);
}
