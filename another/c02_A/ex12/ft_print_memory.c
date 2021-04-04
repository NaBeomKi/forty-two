/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungcoh <seungcoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 22:39:05 by seungcoh          #+#    #+#             */
/*   Updated: 2021/04/03 10:39:31 by seungcoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_memory(void *addr)
{
	int				i;
	char			c[16];
	unsigned long	str;

	i = 0;
	str = (unsigned long)addr;
	while (i < 16)
	{
		c[i++] = 0;
	}
	while (--i >= 0)
	{
		c[i] = str % 16;
		if (c[i] > 9)
			c[i] += 'a' - 10;
		else
			c[i] += '0';
		str /= 16;
	}
	i = 0;
	while (i < 16)
	{
		write(1, c + i++, 1);
	}
	write(1, ": ", 2);
}

void	print_hex(void *addr, unsigned int size)
{
	unsigned int	i;
	char			hex[2];
	char			*str;

	i = 0;
	str = (char *)addr;
	while (i < size)
	{
		hex[0] = str[i] / 16;
		hex[1] = str[i] % 16;
		if (hex[0] > 9)
			hex[0] += 'a' - 10;
		else
			hex[0] += '0';
		if (hex[1] > 9)
			hex[1] += 'a' - 10;
		else
			hex[1] += '0';
		write(1, hex, 2);
		if (i % 2)
			write(1, " ", 1);
		i++;
	}
	while (i++ < 16)
		write(1, " ", 1);
}

void	print_str(void *addr, unsigned int size)
{
	unsigned int	i;
	char			*str;

	i = 0;
	str = (char *)addr;
	while (i < size)
	{
		if (32 <= str[i] && str[i] <= 126)
		{
			write(1, str + i, 1);
		}
		else
			write(1, ".", 1);
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned char	*str;
	int				csize;

	str = addr;
	while (size)
	{
		if (size >= 16)
		{
			csize = 16;
			size -= 16;
		}
		else
		{
			csize = size;
			size = 0;
		}
		print_memory(str);
		print_hex(str, csize);
		print_str(str, csize);
		write(1, "\n", 1);
		str += 16;
	}
	return (addr);
}