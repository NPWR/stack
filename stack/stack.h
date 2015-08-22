/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebitsch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/17 18:45:20 by ebitsch           #+#    #+#             */
/*   Updated: 2015/08/17 19:36:14 by ebitsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H
# include <stdlib.h>
# include <unistd.h>

typedef struct s_istack_element		t_istack_element;
struct								s_istack_element
{
	int					content;
	t_istack_element	*next;
};

typedef struct s_istack				t_istack;
struct								s_istack
{
	int					size;
	t_istack_element	*top;
};

t_istack							*istack_init(void);
void								istack_push(t_istack *stack, int n);
int									istack_pop(t_istack *stack);
int									ican_pop(t_istack *stack);

typedef struct s_opstack_element	t_opstack_element;
struct								s_opstack_element
{
	char				content;
	t_opstack_element	*next;
};

typedef struct s_opstack			t_opstack;
struct								s_opstack
{
	int					size;
	t_opstack_element	*top;
};

t_opstack							*opstack_init(void);
void								opstack_push(t_opstack *stack, char op);
char								opstack_pop(t_opstack *stack);
int									opcan_pop(t_opstack *stack);

#endif
