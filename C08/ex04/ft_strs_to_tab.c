/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bna <bna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 02:40:23 by bna               #+#    #+#             */
/*   Updated: 2021/04/14 01:20:55 by bna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

typedef struct s_stock_str
{
    int size;
    char *str;
    char *copy;
} t_stock_str;

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
    t_stock_str *stock;
    int         i;

    stock = malloc(sizeof(t_stock_str) * (ac + 1));

}
