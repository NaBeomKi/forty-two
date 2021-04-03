/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bna <bna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 15:15:57 by bna               #+#    #+#             */
/*   Updated: 2021/04/03 18:00:03 by bna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;
	int flag;

	i = 0;
	flag = 1;
	while (str[i])
	{
		if (!((str[i] >= 'a' && str[i] <= 'z') \
					|| (str[i] >= 'A' && str[i] <= 'Z')))
			flag = 1;
		if (((str[i] >= 'a' && str[i] <= 'z') \
					|| (str[i] >= 'A' && str[i] <= 'Z')) && flag)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			flag = 0;
		}
		else if ((str[i] >= 'A' && str[i] <= 'Z') && !flag)
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}
