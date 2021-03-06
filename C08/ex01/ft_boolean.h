/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bna <bna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 15:18:57 by bna               #+#    #+#             */
/*   Updated: 2021/04/14 16:20:06 by bna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# define EVEN_MSG    "I have an even number of arguments.\n"
# define ODD_MSG    "I have an odd number of arguments.\n"
# define TRUE    1
# define FALSE    0
# define EVEN(x)     x % 2 == 0 ? 1 : 0
# define SUCCESS     0
# include <unistd.h>
# include <stdbool.h>

typedef bool	t_bool;
void			ft_putstr(char *str);
t_bool			ft_is_even(int nbr);
#endif
