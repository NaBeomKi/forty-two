/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bna <bna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 20:51:18 by bna               #+#    #+#             */
/*   Updated: 2021/04/12 07:26:05 by bna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int     *ft_range(int min, int max)
{
    int *res;
    int i;

    if (min >= max)
        return (NULL);
    res = malloc(sizeof(int) * ((unsigned long long)max - min));
    if (!res)
        return (NULL) ;
    i = 0;
    while (min < max)
        res[i++] = min++;
    return (res);
}