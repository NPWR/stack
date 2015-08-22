/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebitsch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/21 10:22:40 by ebitsch           #+#    #+#             */
/*   Updated: 2015/08/22 14:42:42 by ebitsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BTREE_H
# define FT_BTREE_H
# include <stdlib.h>

typedef struct		s_btree
{
	struct s_btree	*left;
	struct s_btree	*right;
	void			*item;

}					t_btree;
t_btree	*btree_create_node(void *item);
void	btree_apply_infix(t_btree *rt, void (*f)(void *));
void	btree_apply_prefix(t_btree *rt, void (*f)(void *));
void	btree_apply_suffix(t_btree *rt, void (*f)(void *));
void	btree_insert_data(t_btree **rt, void *itm, int (*f)(void *, void *));
int		btree_level_count(t_btree *rt);
void	*btree_search_item(t_btree *rt, void *ref, int (*f)(void *, void *));
void	btree_apply_by_level(t_btree *rt, void (*f)(void *itm, int, int));

#endif
