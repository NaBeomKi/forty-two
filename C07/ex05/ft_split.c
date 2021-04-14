/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bna <bna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 22:27:57 by bna               #+#    #+#             */
/*   Updated: 2021/04/15 03:25:21 by bna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int					find_sep(char c, char *charset)
{
	int i;

	i = 0;
	while (!charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	if (!c)
		return (1);
	return (0);
}

int					count_word(char *str, char *charset)
{
	int i;
	int count;

	count = 0;
	i = 0;
	while (str[i])
	{
		if ((find_sep(str[i + 1], charset) && \
					!find_sep(str[i], charset)))
			count++;
		i++;
	}
	return (count);
}

void				str_copy(char *dest, char *from, char *charset)
{
	int i;

	i = 0;
	while (!find_sep(from[i], charset))
	{
		dest[i] = from[i];
		i++;
	}
	dest[i] = 0;
}

void				ft_transfert_to_tab(char **tab, char *str, char *charset)
{
	int i;
	int j;
	int word;

	word = 0;
	i = 0;
	while (str[i])
	{
		if (find_sep(str[i], charset))
			i++;
		else
		{
			j = 0;
			while (!find_sep(str[i + j], charset))
				j++;
			tab[word] = (char*)malloc(sizeof(char) * (j + 1));
			str_copy(tab[word], str + i, charset);
			i = i + j;
			word++;
		}
	}
}

char				**ft_split(char *str, char *charset)
{
	char	**tab;
	int		word;

	word = count_word(str, charset);
	if (!(tab = (char**)malloc(sizeof(char*) * (word + 1))))
		return (NULL);
	tab[word] = 0;
	ft_transfert_to_tab(tab, str, charset);
	return (tab);
}
