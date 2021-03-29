/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bna <bna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 19:12:23 by bna               #+#    #+#             */
/*   Updated: 2021/03/28 19:16:15 by bna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char negative;
	char positive;

	negative = 'N';
	positive = 'P';
	if (n < 0)
		write(1, &negative, 1);
	else
		write(1, &positive, 1);
}
