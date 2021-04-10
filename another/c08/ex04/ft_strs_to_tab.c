/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwkim <jiwkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 11:14:51 by jiwkim            #+#    #+#             */
/*   Updated: 2021/04/10 18:08:12 by jiwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>
#include <stdlib.h>

int					ft_len(char *str)
{
	int idx;

	idx = 0;
	while (str[idx])
		idx++;
	return (idx);
}

char				*ft_strdup(char *src)
{
	int		size;
	int		i;
	char	*duplicated;

	size = ft_len(src);
	if (!(duplicated = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	i = 0;
	while (src[i])
	{
		duplicated[i] = src[i];
		i++;
	}
	duplicated[i] = '\0';
	return (duplicated);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*strck;
	int			i;
	int			len;

	i = 0;
	len = 0;
	strck = (t_stock_str*)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!strck)
		return (0);
	while (i < ac)
	{
		strck[i].size = ft_len(av[i]);
		strck[i].str = av[i];
		strck[i].copy = ft_strdup(av[i]);
		i++;
	}
	strck[i].str = 0;
	strck[i].size = 0;
	strck[i].copy = 0;
	return (strck);
}
