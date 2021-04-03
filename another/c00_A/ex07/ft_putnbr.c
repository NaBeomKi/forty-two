/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungcoh <seungcoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 16:14:02 by seungcoh          #+#    #+#             */
/*   Updated: 2021/03/27 20:55:15 by seungcoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	a[12];
	int		i;
	int		flag;

	i = 0;
	flag = nb;
	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	while (nb)
	{
		a[i++] = nb < 0 ? (nb % 10) * -1 + '0' : nb % 10 + '0';
		nb /= 10;
	}
	if (flag < nb)
	{
		a[i++] = '-';
	}
	while (--i >= 0)
	{
		write(1, &a[i], 1);
	}
}
