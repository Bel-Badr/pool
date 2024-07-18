/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbeladas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 10:34:43 by bbeladas          #+#    #+#             */
/*   Updated: 2024/07/01 14:37:07 by bbeladas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	ft_conditions(int x, int y, int row, int col)
{
	if ((col == 1 && row == 1) || (col == x && row == y && x > 1 && y > 1))
	{
		ft_putchar('/');
	}
	else if ((col == x && row == 1) || (col == 1 && row == y))
	{
		ft_putchar('\\');
	}
	else if (row == 1 || row == y)
	{
		ft_putchar('*');
	}
	else if (col == 1 || col == x)
	{
		ft_putchar('*');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	col;
	int	row;

	row = 1;
	while (row <= y)
	{
		col = 1;
		while (col <= x)
		{
			ft_conditions(x, y, row, col);
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
