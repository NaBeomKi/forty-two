/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bna <bna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 23:40:00 by bna               #+#    #+#             */
/*   Updated: 2021/04/01 00:50:07 by bna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_num(char *arr, int len)
{
	int i;

	i = 0;
	while (i < len)
	{
		write(1, arr + i, 1);
		i++;
	}
	if (!(*(arr + len - 1) == '9' && *arr == '9' + 1 - len))
		write(1, ", ", 1);
}

void	init_arr(char *arr, int index, int len, char result)
{
	char current;

	current = result;
	if (index != len - 1)
	{
		init_arr(arr, index + 1, len, result + 1);
	}
	while (result < '9' + 1)
	{
		*(arr + index) = result;
		print_num(arr, len);
		result++;
	}
	init_arr(arr, index - 1, len, current + 1);
}

void	ft_print_combn(int n)
{
	char	arr[n];

	init_arr(arr, 0, n, '0');
}
