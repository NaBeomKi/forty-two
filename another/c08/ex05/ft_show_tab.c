/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwkim <jiwkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 11:26:09 by jiwkim            #+#    #+#             */
/*   Updated: 2021/04/10 18:09:58 by jiwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c[100];
	int		i;

	i = 0;
	if (nb == 0)
		write(1, "0", 1);
	if (nb < 0)
		write(1, "-", 1);
	while (nb != 0)
	{
		c[i] = (nb % 10 < 0) ? -(nb % 10) + '0' : (nb % 10) + '0';
		nb /= 10;
		i++;
	}
	while (i--)
		write(1, &c[i], 1);
	write(1, "\n", 1);
}

void	ft_putstr(char *str)
{
	int idx;

	idx = 0;
	while (str[idx])
		write(1, &str[idx++], 1);
	write(1, "\n", 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int idx;

	idx = 0;
	while (par[idx].str != 0)
	{
		ft_putstr(par[idx].str);
		ft_putnbr(par[idx].size);
		ft_putstr(par[idx].copy);
		idx++;
	}
}
