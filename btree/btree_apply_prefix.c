/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_prefix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebitsch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/21 10:29:18 by ebitsch           #+#    #+#             */
/*   Updated: 2015/08/22 14:43:26 by ebitsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void		btree_apply_prefix(t_btree *root, void (*f)(void *))
{
	if (root != NULL)
	{
		(*f)(root->item);
		if (root->left != NULL)
			btree_apply_prefix(root->left, f);
		if (root->right != NULL)
			btree_apply_prefix(root->right, f);
	}
}
