/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebitsch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/21 10:50:24 by ebitsch           #+#    #+#             */
/*   Updated: 2015/08/21 11:52:57 by ebitsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **rt, void *itm, int (*cmpf)(void *, void *))
{
	if (rt[0] == NULL)
		rt[0] = btree_create_node(itm);
	else
	{
		if ((*cmpf)(rt[0]->item, itm) == 1)
		{
			if (rt[0]->left != NULL)
				btree_insert_data(&(rt[0]->left), itm, cmpf);
			else
				rt[0]->left = btree_create_node(itm);
		}
		else if ((*cmpf)(rt[0]->item, itm) == -1 || !(*cmpf)(rt[0]->item, itm))
		{
			if (rt[0]->right != NULL)
				btree_insert_data(&(rt[0]->right), itm, cmpf);
			else
				rt[0]->right = btree_create_node(itm);
		}
	}
}
