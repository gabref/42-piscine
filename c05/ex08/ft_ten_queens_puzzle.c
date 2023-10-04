/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galves-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 16:28:15 by galves-f          #+#    #+#             */
/*   Updated: 2023/10/04 13:36:38 by galves-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_board(int *board, int size)
{
	int		i;
	char	c;

	i = 0;
	while (i < size)
	{
		c = board[i++] + 48;
		write(1, &c, 1);
	}
	write(1, "\n", 1);
}

int	ft_check_board(int *board, int current)
{
	int	i;

	i = 0;
	while (i < current)
	{
		if (board[i] == board[current])
			return (0);
		if (board[i] == board[current] - (current - i)
			|| board[i] == board[current] + (current - i))
			return (0);
		i++;
	}
	return (1);
}

void	ft_place_queens(int *board, int current, int board_size, int *solutions)
{
	int	i;

	if (current == board_size)
	{
		ft_print_board(board, board_size);
		*solutions += 1;
		return ;
	}
	i = 0;
	while (i < board_size)
	{
		board[current] = i;
		if (ft_check_board(board, current))
			ft_place_queens(board, current + 1, board_size, solutions);
		i++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	board[10];
	int	solutions;
	int	size;

	size = 10;
	solutions = 0;
	ft_place_queens(board, 0, size, &solutions);
	return (solutions);
}
