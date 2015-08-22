/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebitsch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/21 10:25:44 by ebitsch           #+#    #+#             */
/*   Updated: 2015/08/21 10:48:13 by ebitsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree		*btree_create_node(void *item)
{
	t_btree		*new;

	new = malloc(sizeof(t_btree));
	new->left = NULL;
	new->right = NULL;
	new->item = item;
	return (new);
}
