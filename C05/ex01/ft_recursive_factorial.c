/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bna <bna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 01:13:24 by bna               #+#    #+#             */
/*   Updated: 2021/04/12 11:45:05 by bna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int i;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	i = ft_recursive_factorial(nb - 1);
	return (nb * i);
}
