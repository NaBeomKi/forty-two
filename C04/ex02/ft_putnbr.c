/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bna <bna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 02:01:34 by bna               #+#    #+#             */
/*   Updated: 2021/04/10 14:25:09 by bna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
}
