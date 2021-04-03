/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bna <bna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 00:10:32 by bna               #+#    #+#             */
/*   Updated: 2021/04/04 00:27:00 by bna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		find_len(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int		find_end(char *s1, char *s2)
{
	int n1;
	int n2;

	n1 = find_len(s1);
	n2 = find_len(s2);
	if (n1 - n2 >= 0)
		return (n1);
	else
		return (n2);
}

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	max_len;

	i = 0;
	max_len = find_end(s1, s2);
	n = max_len <= n ? max_len : n;
	while (i < n)
	{
		if (s1[i] - s2[i] != 0)
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
