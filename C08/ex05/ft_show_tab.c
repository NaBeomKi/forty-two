/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bna <bna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 02:05:24 by bna               #+#    #+#             */
/*   Updated: 2021/04/14 02:22:14 by bna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void    ft_putstr(char *str)
{
    while (*str)
        write(1, str++, 1);
    write(1, "\n", 1);
}

void	print_num(int nb)
{
	int result;

	if (nb == 0)
		return ;
	print_num(nb / 10);
	result = (nb % 10) + '0';
	write(1, &result, 1);
}

void	ft_putnbr(int nb)
{
	int result;

	if (nb < 0)
	{
		write(1, "-", 1);
		print_num((nb / 10) * (-1));
		result = (nb % 10) * (-1);
	}
	else
	{
		print_num(nb / 10);
		result = nb % 10;
	}
	result += '0';
	write(1, &result, 1);
	write(1, "\n", 1);
}

void    ft_show_tab(struct s_stock_str *par)
{
    int i;

    i = 0;
    while (par[i].str)
    {
        ft_putstr(par[i].str);
        ft_putnbr(par[i].size);
        ft_putstr(par[i].copy);
        i++;
    }
}