/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bna <bna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 18:29:41 by bna               #+#    #+#             */
/*   Updated: 2021/04/11 20:40:48 by bna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char    *ft_strdup(char *src)
{
        int length;
        char *res;

        while (src[length])
            length++;
        res = malloc(length + 1);
        res[length] = 0;
        while (--length >= 0)
            res[length] = src[length];
        return (res);
}