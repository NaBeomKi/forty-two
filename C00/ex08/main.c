/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bna <bna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 00:12:19 by bna               #+#    #+#             */
/*   Updated: 2021/03/31 16:25:46 by bna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_print_combn(int n);

int		main(void)
{
	ft_print_combn(0);
	printf("\n");
	ft_print_combn(5);
	printf("\n");
	ft_print_combn(1);
	printf("\n");
	ft_print_combn(9);
	printf("\n");
	return (0);
}