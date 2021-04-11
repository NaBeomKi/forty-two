/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bna <bna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 22:53:07 by bna               #+#    #+#             */
/*   Updated: 2021/04/11 17:08:39 by bna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_sqrt(int n)
{
    unsigned long long i;

    if (n <= 0)
        return (0);
    i = 2;
    while ((i * i) <= (unsigned long long)n)
    {
        if ((i * i) == (unsigned long long)n)
            return (i);
        i++;
    }
    return (0);
}