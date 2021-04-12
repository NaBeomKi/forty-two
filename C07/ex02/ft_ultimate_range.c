/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bna <bna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 06:46:21 by bna               #+#    #+#             */
/*   Updated: 2021/04/12 22:54:24 by bna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int *res;
	int i;

	i = 0;
	if (min >= max)
		return (0);
	*range = malloc(sizeof(int) * ((unsigned long long)max - min));
	if (!*range)
		return (-1);
	res = *range;
	while (min < max)
		res[i++] = min++;
	return ((unsigned long long)max - min);
}
