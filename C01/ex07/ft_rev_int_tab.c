/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bna <bna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 10:35:35 by bna               #+#    #+#             */
/*   Updated: 2021/03/31 12:14:40 by bna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int index;
	int tmp_arr[size];

	index = 0;
	while (index < size)
	{
		tmp_arr[index] = *(tab + index);
		index++;
	}
	index = 0;
	while (size > 0)
	{
		*(tab + index++) = tmp_arr[--size];
	}
}
