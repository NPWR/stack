/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebitsch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/11 12:21:28 by ebitsch           #+#    #+#             */
/*   Updated: 2015/08/21 13:02:28 by ebitsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dst, char *src)
{
	int i;
	int l_d;
	int l_s;

	i = -1;
	l_d = 0;
	l_s = 0;
	while (dst[l_d])
		l_d++;
	while (src[l_s])
		l_s++;
	while (++i < l_s)
		dst[i + l_d] = src[i];
	dst[i + l_d] = '\0';
	return (src);
}
