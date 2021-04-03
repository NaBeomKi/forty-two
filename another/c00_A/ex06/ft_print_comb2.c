/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungcoh <seungcoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 23:39:33 by seungcoh          #+#    #+#             */
/*   Updated: 2021/03/27 16:13:15 by seungcoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchars(char a, char b)
{
	write(1, &a, 1);
	write(1, &b, 1);
}

void	second_num(char w, char x)
{
	char y;
	char z;

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
			ft_putchars(w, x);
			write(1, " ", 1);
			ft_putchars(y, z);
			if (!(w == '9' && x == '8' && y == '9' && z == '9'))
			{
				write(1, ", ", 2);
			}
		}
		z = '0' - 1;
	}
}

void	ft_print_comb2(void)
{
	char w;
	char x;

	w = '0';
	x = '0';
	while (w <= '9')
	{
		while (x <= '9')
		{
			second_num(w, x);
			x++;
		}
		x = '0';
		w++;
	}
}
