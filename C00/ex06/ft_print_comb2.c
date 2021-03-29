/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bna <bna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 16:53:32 by bna               #+#    #+#             */
/*   Updated: 2021/03/30 01:54:28 by bna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_num(int w, int x, int y, int z)
{
	write(1, &w, 1);
	write(1, &x, 1);
	write(1, " ", 1);
	write(1, &y, 1);
	write(1, &z, 1);
	if (!(w == '9' && x == '8' && y == '9' & z == '9'))
	{
		write(1, ", ", 2);
	}
}

void	second_num(int w, int x)
{
	int y;
	int z;

	y = w - 1;
	z = x;
	if (z == '9')
	{
		z = '0' - 1;
		y++;
	}
	while (++y <= '9')
	{
		while (++z <= '9')
		{
			print_num(w, x, y, z);
		}
		z = '0' - 1;
	}
}

void	ft_print_comb2(void)
{
	int w;
	int x;

	w = '0' - 1;
	while (++w <= '9')
	{
		x = '0' - 1;
		while (++x <= '9')
		{
			second_num(w, x);
		}
	}
}
