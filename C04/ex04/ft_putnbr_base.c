/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bna <bna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 21:13:48 by bna               #+#    #+#             */
/*   Updated: 2021/04/10 23:11:09 by bna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		vaild_num(char *base)
{
	int i;
	int j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

void	putnbr_print(long nbr, char *base, int base_num)
{
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
	}
	if (nbr >= base_num)
		putnbr_print((nbr / base_num), base, base_num);
	write(1, &base[(nbr % base_num)], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int base_num;

	base_num = vaild_num(base);
	if (!base_num)
		return ;
	putnbr_print((long)nbr, base, base_num);
}
