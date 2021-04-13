/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bna <bna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 02:40:23 by bna               #+#    #+#             */
/*   Updated: 2021/04/14 02:36:29 by bna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int                 ft_strlen(char *str)
{
    int i;

    i = 0;
    while (*str++)
        i++;
    return (i);
}

char                *ft_strdup(char *src)
{
	int		length;
	char	*res;

	length = ft_strlen(src);
	res = malloc(length + 1);
	res[length] = 0;
	while (--length >= 0)
		res[length] = src[length];
	return (res);
}

struct s_stock_str  *ft_strs_to_tab(int ac, char **av)
{
    t_stock_str *stock;
    int         i;

    stock = (t_stock_str*)malloc(sizeof(t_stock_str) * (ac + 1));
    if(!stock)
        return (0);
        i = 0;
    while (i < ac)
    {
        stock[i].size = ft_strlen(av[i]);
        stock[i].str = av[i];
        stock[i].copy = ft_strdup(av[i]);
        i++;
    }
    stock[i].size = 0;
    stock[i].str = 0;
    stock[i].copy = 0;
    return (stock);
}
