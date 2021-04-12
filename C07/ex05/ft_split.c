/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bna <bna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 22:27:57 by bna               #+#    #+#             */
/*   Updated: 2021/04/13 01:24:13 by bna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;

	if (!*to_find)
		return (str);
	i = 0;
	while (str[i])
	{
		if (str[i] == to_find[0])
		{
			j = 0;
			while (to_find[j])
			{
				if (str[i + j] != to_find[j])
				{
					break ;
				}
				j++;
			}
			if (!to_find[j])
				return (&str[i]);
		}
		i++;
	}
	return (0);
}

char    **ft_split(char *str, char *charset)
{
    char *tmp;
    int i;

    tmp = str;
    while (*tmp)
    {
        
        i++;
    }
}