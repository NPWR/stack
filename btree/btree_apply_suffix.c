/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_suffix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebitsch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/21 10:42:06 by ebitsch           #+#    #+#             */
/*   Updated: 2015/08/21 10:44:01 by ebitsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void		btree_apply_suffix(t_btree *root, void (*f)(void *))
{
	if (root != NULL)
	{
		if (root->left != NULL)
			btree_apply_suffix(root, f);
		if (root->right != NULL)
			btree_apply_suffix(root, f);
		(*f)(root->item);
	}
}
