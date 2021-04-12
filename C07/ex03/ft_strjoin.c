/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bna <bna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 13:56:48 by bna               #+#    #+#             */
/*   Updated: 2021/04/12 22:48:30 by bna              ###   ########.fr       */
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
	while (*src)
		*dest++ = *src++;
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	char	*tmp;
	int		i;
	int		j;
	int		total;

	i = 0;
	total = 0;
	while (i < size)
		total += ft_strlen(strs[i++]);
	if (!size)
		total += ft_strlen(sep) * (size - 1);
	res = malloc((sizeof(char) * total) + 1);
	tmp = res;
	j = 0;
	while (j < size)
	{
		tmp = ft_strcat(tmp, strs[j]);
		if (j != size - 1)
			tmp = ft_strcat(tmp, sep);
		j++;
	}
	*tmp = 0;
	return (res);
}
