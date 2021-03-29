/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyujlee <kyujlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 10:16:08 by kyujlee           #+#    #+#             */
/*   Updated: 2021/03/28 14:52:48 by bna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

/*
**print character in first and last row according to condition
*/

void	how_to_print_corner(char first, char last, int seq, int dst)
{
	if (0 == seq)
		ft_putchar(first);
	else if (dst - 1 == seq)
		ft_putchar(last);
}

/*
**print character in middle according to condition
*/

void	how_to_print_mid(char middle, int seq, int dst)
{
	if ((seq > 0) && (seq < dst - 1))
		ft_putchar(middle);
}

/*
**print character in the first and last columns of the middle row
*/

void	how_to_print_mid_first_last(char f_l, int seq, int dst)
{
	if ((0 == seq) || (dst - 1 == seq))
		ft_putchar(f_l);
}

/*
**A procedure when to print according to condition
*/

void	when_to_print(int width, int height, int x_position, int y_position)
{
	if (0 == y_position)
	{
		how_to_print_corner('/', '\\', x_position, width);
		how_to_print_mid('*', x_position, width);
	}
	else if (height - 1 == y_position)
	{
		how_to_print_corner('\\', '/', x_position, width);
		how_to_print_mid('*', x_position, width);
	}
	else
	{
		how_to_print_mid(' ', x_position, width);
		how_to_print_mid_first_last('*', x_position, width);
	}
}

/*
**A procedure using all of the procedures in rush01
*/

void	rush(int x, int y)
{
	int	current_x;
	int	current_y;

	current_x = 0;
	current_y = 0;
	while (current_y < y)
	{
		current_x = 0;
		while (current_x < x)
		{
			when_to_print(x, y, current_x, current_y);
			current_x++;
		}
		ft_putchar('\n');
		current_y++;
	}
}
