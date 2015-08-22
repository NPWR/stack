/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebitsch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/22 10:42:38 by ebitsch           #+#    #+#             */
/*   Updated: 2015/08/22 10:53:17 by ebitsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int		depth_count(t_btree *branch, int count)
{
	int		ldepth;
	int		rdepth;

	if (branch == NULL)
		return (count + 1);
	ldepth = depth_count(branch->left, count);
	rdepth = depth_count(branch->right, count);
	if (ldepth >= rdepth)
		return (ldepth);
	return (rdepth);
}

int		btree_level_count(t_btree *rt)
{
	int		ldepth;
	int		rdepth;

	ldepth = depth_count(rt->left, 0);
	rdepth = depth_count(rt->right, 0);
	if (ldepth >= rdepth)
		return (ldepth);
	return (rdepth);
}
