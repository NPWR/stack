/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_by_level.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebitsch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/22 13:49:41 by ebitsch           #+#    #+#             */
/*   Updated: 2015/08/22 14:13:15 by ebitsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	nxt(t_btree *br, int lvl, int ft, void (*f)(void *it, int lvl, int fst))
{
	(*f)(br->item, lvl, ft);
	if (ft)
		nxt(br->left, lvl + 1, 1, f);
	else
		nxt(br->left, lvl + 1, 0, f);
	nxt(br->right, lvl + 1, 0, f);
}

void	btree_apply_by_level(t_btree *rt, void (*f)(void *it, int lvl, int fst))
{
	nxt(rt, 0, 1, f);
}
