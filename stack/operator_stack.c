/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebitsch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/17 19:39:54 by ebitsch           #+#    #+#             */
/*   Updated: 2015/08/17 19:52:42 by ebitsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

t_opstack		*opstack_init(void)
{
	t_opstack *stack;
	stack = malloc(sizeof(t_opstack));
	stack->size = 0;
	stack->top = malloc(sizeof(t_opstack_element));
	stack->top->content = '\0';
	stack->top->next = (t_opstack_element *)0;
	return (stack);
}

void			opstack_push(t_opstack *stack, char c)
{
	t_opstack_element *nse;

	nse = malloc(sizeof(t_opstack_element));
	nse->next = stack->top;
	nse->content = c;
	stack->top = nse;
	stack->size++;
}

char			opstack_pop(t_opstack *stack)
{
	char ret;
	t_opstack_element *ntop;

	ret = stack->top->content;
	ntop = stack->top->next;
	free(stack->top);
	stack->top = ntop;
	stack->size--;
	return (ret);
}

int				opcan_pop(t_opstack *stack)
{
	if (stack->size)
		return (1);
	return (0);
}
