/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebitsch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/21 12:16:28 by ebitsch           #+#    #+#             */
/*   Updated: 2015/08/22 10:38:26 by ebitsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *rt, void *ref, int (*cmpf)(void*, void *))
{
	if (rt == NULL)
		return (NULL);
	else
	{
		if (!cmpf(rt->item, ref))
			return (rt->item);
		else if (cmpf(rt->item, ref) > 0)
			return (btree_search_item(rt->left, ref, cmpf));
		else
			return (btree_search_item(rt->right, ref, cmpf));
	}
}
