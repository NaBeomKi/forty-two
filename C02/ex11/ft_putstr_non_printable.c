/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bna <bna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 20:29:36 by bna               #+#    #+#             */
/*   Updated: 2021/04/03 21:39:35 by bna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	to_hex_print(unsigned char c)
{
	unsigned char div;
	unsigned char mod;

	div = (c / 16) + '0';
	mod = (c % 16) + '0';
	div = div > '9' ? div + 39 : div;
	mod = mod > '9' ? mod + 39 : mod;
	write(1, "\\", 1);
	write(1, &div, 1);
	write(1, &mod, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (!((str[i] >= 0 && str[i] <= 31) || str[i] == 127))
		{
			write(1, &str[i], 1);
		}
		else
		{
			to_hex_print(str[i]);
		}
		i++;
	}
}
