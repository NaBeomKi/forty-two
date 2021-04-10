/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bna <bna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 01:13:32 by bna               #+#    #+#             */
/*   Updated: 2021/04/10 15:37:16 by bna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_recursive_power(int nb, int power)
{
    if (nb == 0 && power == 0)
        return (1);
    if (power == 0)
        return (1);
    nb *= ft_recursive_power(nb, power - 1);
    return (nb);
}
