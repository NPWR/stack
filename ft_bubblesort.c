/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebitsch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/08 18:25:07 by ebitsch           #+#    #+#             */
/*   Updated: 2015/08/21 13:01:52 by ebitsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_check_sort(int *tab, int size)
{
	int i;

	i = 1;
	while (i < size)
	{
		if (tab[i] < tab[i - 1])
			return (0);
		i++;
	}
	return (1);
}

void	ft_bubblesort(int *tab, int size)
{
	int i;

	while (!ft_check_sort(tab, size))
	{
		i = 1;
		while (i < size)
		{
			if (tab[i] < tab[i - 1])
				ft_swap(&(tab[i]), &(tab[i - 1]));
			i++;
		}
	}
}
