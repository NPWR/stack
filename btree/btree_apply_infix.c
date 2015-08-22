/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebitsch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/21 10:37:04 by ebitsch           #+#    #+#             */
/*   Updated: 2015/08/21 11:44:37 by ebitsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void		btree_apply_infix(t_btree *root, void (*f)(void *))
{
	if (root != NULL)
	{
		if (root->left != NULL)
			btree_apply_infix(root->left, f);
		(*f)(root->item);
		if (root->right != NULL)
			btree_apply_infix(root->right, f);
	}
}
