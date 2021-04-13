/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bna <bna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 22:27:57 by bna               #+#    #+#             */
/*   Updated: 2021/04/13 20:19:03 by bna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*g_str;
int		g_total_len;
int		g_count;

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}

void	ft_strcpy(char *str, char *charset)
{
	int i;
	int j;
	int flag;

	i = 0;
	flag = 0;
	while (str[i])
	{
		j = 0;
		while (charset[j])
		{
			if (str[i] == charset[j])
			{
				g_str[i] = 0;
				flag = 0;
				break ;
			}
			j++;
		}
		if (!charset[j])
		{
			!flag ? g_count++ : g_count;
			g_str[i] = str[i];
			flag = 1;
		}
		i++;
	}
	g_str[i] = 0;
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		i;
	int		j;
	int		flag;

	g_count = 0;
	g_total_len = ft_strlen(str);
	g_str = (char *)malloc(sizeof(char) * (g_total_len + 1));
	ft_strcpy(str, charset);
	result = (char **)malloc(sizeof(char *) * g_count + 1);
	i = 0;
	j = 0;
	flag = 0;
	while (i < g_count)
	{
		while (j < g_total_len)
		{
			if (!flag && g_str[j])
			{
				result[i] = &g_str[j];
				flag = 1;
				break ;
			}
			if (!g_str[j])
				flag = 0;
			j++;
		}
		i++;
	}
	result[i] = 0;
	return (result);
}
