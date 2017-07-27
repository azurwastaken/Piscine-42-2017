/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maduhoux <maduhoux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 11:18:36 by maduhoux          #+#    #+#             */
/*   Updated: 2017/07/08 11:47:04 by llapotre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	print_ln(int column, char begin, char middle, char end)
{
	int j;

	j = 0;
	if (column > 0)
		ft_putchar(begin);
	while (j < column - 2)
	{
		ft_putchar(middle);
		j++;
	}
	if (column > 1)
		ft_putchar(end);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int i;

	if (y > 0)
		print_ln(x, 'o', '-', 'o');
	if (y > 2)
	{
		i = 1;
		while (i < y - 1)
		{
			print_ln(x, '|', ' ', '|');
			i++;
		}
	}
	if (y > 1)
		print_ln(x, 'o', '-', 'o');
}
