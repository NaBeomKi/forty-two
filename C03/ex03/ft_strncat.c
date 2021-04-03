/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bna <bna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 00:41:27 by bna               #+#    #+#             */
/*   Updated: 2021/04/04 00:43:22 by bna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;

	i = 0;
	while (dest[i])
	{
		i++;
	}
	while (i < nb)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
