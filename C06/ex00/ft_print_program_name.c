/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bna <bna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 00:10:17 by bna               #+#    #+#             */
/*   Updated: 2021/04/11 05:01:27 by bna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char *argv[])
{
	--argc;
	while (*argv[argc])
	{
		write(1, argv[argc]++, 1);
	}
	write(1, "\n", 1);
	return (0);
}