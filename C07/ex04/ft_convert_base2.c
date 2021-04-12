/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bna <bna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 19:53:38 by bna               #+#    #+#             */
/*   Updated: 2021/04/13 00:23:07 by bna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		is_space(char *c)
{
	if (*c == ' ' || *c == '\n' || *c == '\t' \
			|| *c == '\v' || *c == '\f' || *c == '\r')
		return (1);
	return (0);
}

int		find_num(char *str, char *base, int base_num)
{
	int i;
	int result;

	i = 0;
	result = 0;
	while (*str)
	{
		i = 0;
		while (base[i])
		{
			if (*str == base[i])
				break ;
			i++;
		}
		if (!base[i])
			break ;
		result *= base_num;
		result += i;
		str++;
	}
	return (result);
}

int		ft_atoi_base(char *str, char *base)
{
	int base_num;
	int result;

	base_num = ft_strlen(base);
	g_sign = 1;
	result = 0;
	while (is_space(str))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			g_sign *= -1;
		str++;
	}
	result = find_num(str, base, base_num);
	result *= g_sign;
	return (result);
}
