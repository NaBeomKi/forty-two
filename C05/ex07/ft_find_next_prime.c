/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bna <bna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 09:40:03 by bna               #+#    #+#             */
/*   Updated: 2021/04/12 11:51:06 by bna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	unsigned long long i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i * i <= (unsigned long long)nb)
	{
		if (!(nb % i))
			return (0);
		i++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	int i;

	i = 0;
	if (ft_is_prime(nb))
		return (nb);
	if (!ft_is_prime(nb))
		i = ft_find_next_prime(nb + 1);
	return (i);
}
