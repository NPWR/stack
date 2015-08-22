/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebitsch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/17 19:03:39 by ebitsch           #+#    #+#             */
/*   Updated: 2015/08/17 19:37:27 by ebitsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

t_istack	*istack_init(void)
{
	t_istack	*stack;

	stack = malloc(sizeof(t_istack));
	stack->top = malloc(sizeof(t_istack_element));
	stack->top->content = 0;
	stack->top->next = ((t_istack_element *)0);
	stack->size = 0;
	return (stack);
}

void		istack_push(t_istack *stack, int n)
{
	t_istack_element *nse;

	nse = malloc(sizeof(t_istack_element));
	nse->content = n;
	nse->next = stack->top;
	stack->top = nse;
	stack->size++;
}

int			istack_pop(t_istack *stack)
{
	int					ret;
	t_istack_element	*ntop;

	ret = stack->top->content;
	ntop = stack->top->next;
	free(stack->top);
	stack->top = ntop;
	stack->size--;
	return (ret);
}

int			ican_pop(t_istack *stack)
{
	if (stack->size)
		return (1);
	return (0);
}
