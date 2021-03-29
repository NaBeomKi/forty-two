/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bna <bna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 18:44:00 by bna               #+#    #+#             */
/*   Updated: 2021/03/30 02:39:15 by bna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int arr[10];
	int index;
	int is_positive;

	if (nb < 0)
	{
		is_positive = -1;
		nb = nb * (-1);
	}
	else
		is_positive = 1;
	index = 0;
	while (index < 10)
	{
		arr[index++] = nb % 10;
		nb = (nb / 10) != 0 ? (nb / 10) : -1;
	}
	while (--index >= 0)
	{
		char num;

		num = arr[index] + 48;
		if (num != '0' - 1)
		{
			if (!is_positive)
			{
				write(1, "-", 1);
			}
			write(1, &num, 1);
		}
	}
}
