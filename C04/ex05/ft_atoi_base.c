/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bna <bna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 02:44:22 by bna               #+#    #+#             */
/*   Updated: 2021/04/08 05:46:02 by bna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     is_space(char *c)
{
    if (*c == ' ' || *c == '\n' || *c == '\t' || *c == '\v' || *c == '\f' || *c == '\r')
        return (1);
    return (0);
}

int     vaild_num(char *base)
{
    int i;
    int j;

    i = 0;
    while (base[i])
    {
        if (base[i] == '+' || base[i] == '-' || is_space(base[i]))
            return (0);
        if (base[i])
        {
            j = i + 1;
            while (base[j])
            {
                if (base[i] == base[j])
                    return (0);
                j++;
            }
        }
        i++;
    }
    if (i < 2)
        return (0);
    return (i);
}

int ft_atoi_base(char *str, char *base)
{
    int base_num;

    base_num = vaild_num(base);
    if (!base_num)
        return (0);
}