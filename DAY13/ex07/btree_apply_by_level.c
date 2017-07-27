/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_by_level.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaseaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 21:21:53 by mcaseaux          #+#    #+#             */
/*   Updated: 2017/07/26 20:57:39 by mcaseaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_on_level(t_btree **root, int level,
		void (*applyf)(void *item, int current_level, int is_first_elem))
{
	if (*root)
	{
		applyf((*root)->item, level, (level == 1) ? 1 : 0);
		if ((*root)->left)
			btree_apply_on_level(&(*root)->left, level + 1, applyf);
		if ((*root)->right)
			btree_apply_on_level(&(*root)->right, level + 1, applyf);
	}
}

void	btree_apply_by_level(t_btree *root, void (*applyf)(void *item,
			int current_level, int is_first_elem))
{
	btree_apply_on_level(&root, 1, applyf);
}
