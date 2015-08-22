/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebitsch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/21 12:58:12 by ebitsch           #+#    #+#             */
/*   Updated: 2015/08/21 13:00:35 by ebitsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>

int		ft_atoi(char *s);
void	ft_bubblesort(int *tab, int size);
void	ft_putchar(char c);
void	ft_putstr(char *s);
char	*ft_strcat(char *dst, char *src);
int		ft_strcmp(char *s1, char *s2);
int		ft_strlen(char *s);
void	ft_swap(int *a, int *b);

#endif
