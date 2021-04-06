/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bna <bna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 02:01:34 by bna               #+#    #+#             */
/*   Updated: 2021/04/06 21:09:38 by bna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_number(int is_positive, int index, char arr[])
{
	if (!is_positive)
		write(1, "-", 2);
	while (--index >= 0)
	{
		if (arr[0] == 0)
		{
			write(1, "0", 1);
			break ;
		}
		write(1, &arr[index], 1);
	}
}

void	ft_putnbr(int nb)
{
	char	arr[10];
	int		index;
	int		is_positive;

	is_positive = nb < 0 ? 0 : 1;
	index = 0;
	while (index < 10)
	{
		if (nb < 0)
			arr[index++] = (nb % 10) * (-1) + '0';
		else if (nb == 0)
			arr[index++] = nb;
		else
			arr[index++] = (nb % 10) + '0';
		nb = nb / 10;
	}
	print_number(is_positive, index, arr);
}