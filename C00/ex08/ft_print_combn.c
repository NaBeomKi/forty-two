/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bna <bna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 23:40:00 by bna               #+#    #+#             */
/*   Updated: 2021/03/30 01:03:00 by bna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_num(init, end)
{
	int j = init;
	while (++j <= end)
	{
		if (j < '9' + 1)
		{
			print_num(j, end - 1);
		}
		else
		{
			write(1, &j, 1);
		}
	}
}

void	ft_print_combn(int n)
{
	int end;
	int i;
	
	end = '0' + n;
	i = '0' - 1;
	print_num(i, end);
}
