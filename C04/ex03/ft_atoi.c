/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bna <bna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 18:17:24 by bna               #+#    #+#             */
/*   Updated: 2021/04/10 14:54:33 by bna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_space(char *c)
{
	if (*c == ' ' || *c == '\n' || *c == '\t' \
			|| *c == '\v' || *c == '\f' || *c == '\r')
		return (1);
	return (0);
}

int		ft_atoi(char *str)
{
	int i;
	int sign;
	int result;

	i = 0;
	sign = 1;
	result = 0;
	while (is_space(&str[i]))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += (str[i] - '0') * sign;
		i++;
	}
	return (result);
}
