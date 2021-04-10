/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwkim <jiwkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 01:48:54 by jiwkim            #+#    #+#             */
/*   Updated: 2021/04/10 15:11:54 by jiwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# define EVEN_MSG	"I have an even number of arguments.\n"
# define ODD_MSG	"I have an odd number of arguments.\n"
# define SUCCESS	0
# define EVEN(x)	x % 2 == 0 ? 1 : 0
# define TRUE		1
# define FALSE		0
# include <unistd.h>
# include <stdbool.h>

typedef bool	t_bool;

void	ft_putstr(char *str);

t_bool	ft_is_even(int nbr);

#endif
