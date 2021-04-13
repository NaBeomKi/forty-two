/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bna <bna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 22:27:57 by bna               #+#    #+#             */
/*   Updated: 2021/04/13 23:06:55 by bna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*g_str;
char	**g_result;
int		g_total_len;
int		g_count;
int		g_i;
int		g_j;
int		g_flag;

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
	g_i = 0;
	g_flag = 0;
	while (str[g_i])
	{
		g_j = 0;
		while (charset[g_j])
		{
			if (str[g_i] == charset[g_j])
			{
				g_str[g_i] = 0;
				g_flag = 0;
				break ;
			}
			g_j++;
		}
		if (!charset[g_j])
		{
			!g_flag ? g_count++ : g_count;
			g_str[g_i] = str[g_i];
			g_flag = 1;
		}
		g_i++;
	}
	g_str[g_i] = 0;
}

void	get_result(void)
{
	g_i = 0;
	g_j = 0;
	g_flag = 0;
	while (g_i < g_count)
	{
		while (g_j < g_total_len)
		{
			if (!g_flag && g_str[g_j])
			{
				g_result[g_i] = &g_str[g_j];
				g_flag = 1;
				break ;
			}
			g_flag = !g_str[g_j] ? 0 : g_flag;
			g_j++;
		}
		g_i++;
	}
	g_result[g_i] = 0;
}

char	**ft_split(char *str, char *charset)
{
	g_count = 0;
	g_total_len = ft_strlen(str);
	g_str = (char *)malloc(sizeof(char) * (g_total_len + 1));
	ft_strcpy(str, charset);
	g_result = (char **)malloc(sizeof(char *) * g_count + 1);
	get_result();
	return (g_result);
}
