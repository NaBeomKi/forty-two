/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bna <bna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 21:13:48 by bna               #+#    #+#             */
/*   Updated: 2021/04/07 01:11:43 by bna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     len(char *base)
{
    int i;
    int j;

    i = 0;
    while (base[i])
    {
        if (base[i] == '+' || base[i] == '-')
            return (0);
        if (base[i + 1])
        {
            j = 0;
            while (base[i + 1 + j])
            {
                if (base[i] == base[i + 1 + j])
                    return (0);
                j++;
            }
        }
        i++;
    }
    if (!*base || i == 1)
        return (0);
    return (i);
}

void    ft_putnbr_base(int nbr, char *base)
{
    int base_num;

    base_num = len(base);
    if (!base_num)
        return;
    
    
}