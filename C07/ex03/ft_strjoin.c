/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bna <bna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 13:56:48 by bna               #+#    #+#             */
/*   Updated: 2021/04/15 01:28:13 by bna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest + i);
}

void	loop(int size, char *res, char **strs, char *sep)
{
	int		j;
	char	*tmp;

	j = 0;
	tmp = res;
	while (j < size)
	{
		tmp = ft_strcat(tmp, strs[j]);
		if (j != size - 1)
			tmp = ft_strcat(tmp, sep);
		j++;
	}
	*tmp = 0;
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		i;
	int		j;
	int		total;

	i = 0;
	total = 0;
	while (i < size)
		total += (ft_strlen(strs[i++]) + ft_strlen(sep));
	total -= ft_strlen(sep);
	total = !size ? 0 : total;
	res = (char*)malloc((sizeof(char) * total) + 1);
	if (!res)
		return (0);
	loop(size, res, strs, sep);
	return (res);
}
