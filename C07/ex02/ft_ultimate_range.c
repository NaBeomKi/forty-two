/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bna <bna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 06:46:21 by bna               #+#    #+#             */
/*   Updated: 2021/04/14 13:54:19 by bna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int *res;
	int i;
	int size;

	if (min >= max)
		return (0);
	size = max - min;
	res = (int*)malloc(sizeof(int) * size);
	if (!res)
		return (-1);
	i = 0;
	while (min < max)
		res[i++] = min++;
	*range = res;
	return (size);
}
