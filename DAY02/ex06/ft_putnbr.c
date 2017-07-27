/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaseaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 01:01:42 by mcaseaux          #+#    #+#             */
/*   Updated: 2017/07/11 23:46:22 by mcaseaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		vabs(int nb)
{
	if (nb < 0)
	{
		nb = nb * (-1);
		ft_putchar('-');
	}
	return (nb);
}

void	affiche(char *number)
{
	int i;
	int flag;

	i = 0;
	flag = 0;
	while (i <= 9)
	{
		if (!(number[i] == '0'))
			flag = 1;
		if (flag == 1)
			ft_putchar(number[i]);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	char			number[10];
	unsigned int	nb_test;
	int				i;

	if (nb == 0)
		ft_putchar('0');
	i = 9;
	while (i >= 0)
	{
		number[i] = 0;
		i--;
	}
	nb_test = vabs(nb);
	i = 9;
	while (i >= 0)
	{
		number[i] = nb_test % 10 + 0x30;
		nb_test = nb_test / 10;
		i--;
	}
	number[i] = nb_test % 10;
	affiche(number);
}
