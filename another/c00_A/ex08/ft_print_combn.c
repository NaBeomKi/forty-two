/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungcoh <seungcoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 20:46:53 by seungcoh          #+#    #+#             */
/*   Updated: 2021/03/29 10:16:54 by seungcoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printi(int num, int n, int flag)
{
	int		digit;
	char	c;

	digit = 1;
	while (--n > 0)
	{
		digit *= 10;
	}
	while (digit)
	{
		c = num / digit + '0';
		num -= num / digit * digit;
		digit /= 10;
		write(1, &c, 1);
	}
	if (flag)
	{
		write(1, ", ", 2);
	}
}

int		ft_check(int num)
{
	int i;
	int digit;
	int flag;

	i = 0;
	digit = 10;
	flag = 0;
	while ((num % digit) / (digit / 10) == (9 - i++))
	{
		num -= (num % digit);
		digit *= 10;
		flag = 1;
	}
	num += digit / 10;
	if (flag)
	{
		i = num % digit / (digit / 10) + 1;
		digit /= 100;
		while (digit)
		{
			num += i++ * digit;
			digit /= 10;
		}
	}
	return (num);
}

void	ft_print_combn(int n)
{
	int start;
	int digit;
	int k;
	int end;

	digit = 1;
	k = n;
	start = 0;
	end = 0;
	while (k > 0)
	{
		start += digit * (k - 1);
		end += digit * (9 - n + k);
		digit *= 10;
		k--;
	}
	while (start < end)
	{
		ft_printi(start, n, 1);
		start = ft_check(start);
	}
	ft_printi(start, n, 0);
}
