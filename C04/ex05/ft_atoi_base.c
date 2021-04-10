/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bna <bna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 02:44:22 by bna               #+#    #+#             */
/*   Updated: 2021/04/10 14:53:19 by bna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_space(char *c)
{
	if (*c == ' ' || *c == '\n' || *c == '\t' \
			|| *c == '\v' || *c == '\f' || *c == '\r')
		return (1);
	return (0);
}

int		vaild_num(char *base)
{
	int i;
	int j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || is_space(&base[i]))
			return (0);
		if (base[i])
		{
			j = i + 1;
			while (base[j])
			{
				if (base[i] == base[j])
					return (0);
				j++;
			}
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
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
	int sign;
	int result;

	base_num = vaild_num(base);
	sign = 1;
	result = 0;
	if (!base_num)
		return (0);
	while (is_space(str))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	result = find_num(str, base, base_num);
	result *= sign;
	return (result);
}
