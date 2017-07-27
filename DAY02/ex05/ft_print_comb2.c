/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaseaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 17:22:18 by mcaseaux          #+#    #+#             */
/*   Updated: 2017/07/06 20:00:48 by mcaseaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	affiche(int a, int b)
{
	char num[4];

	num[0] = (a / 10) + 48;
	num[1] = (a % 10) + 48;
	num[2] = (b / 10) + 48;
	num[3] = (b % 10) + 48;
	ft_putchar(num[0]);
	ft_putchar(num[1]);
	ft_putchar(' ');
	ft_putchar(num[2]);
	ft_putchar(num[3]);
	if (!(a == 98 && b == 99))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	while (!(a == 99 && b > 99))
	{
		affiche(a, b);
		b++;
		if (b > 99)
		{
			a++;
			b = a + 1;
		}
	}
}
