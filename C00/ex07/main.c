/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bna <bna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 18:42:48 by bna               #+#    #+#             */
/*   Updated: 2021/03/31 01:11:58 by bna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putnbr(int nb);

int		main(void)
{
	ft_putnbr(321);
	printf("\n");
	ft_putnbr(56035430);
	printf("\n");
	ft_putnbr(-1538730312);
	printf("\n");
	ft_putnbr(0000151000);
	printf("\n");
	ft_putnbr(-2147483648);
	printf("\n");
	ft_putnbr(-120983);
	printf("\n");
	ft_putnbr(2147483647);
	printf("\n");
	ft_putnbr(12325);
	printf("\n");
	ft_putnbr(0465400);
	printf("\n");
	ft_putnbr(-4650);
	printf("\n");
	ft_putnbr(0);
	printf("\n");
	ft_putnbr(00000000);
	printf("\n");
	ft_putnbr(-000000001);
	printf("\n");
	return (0);
}
