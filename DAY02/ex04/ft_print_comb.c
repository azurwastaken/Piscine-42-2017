/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaseaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 10:54:18 by mcaseaux          #+#    #+#             */
/*   Updated: 2017/07/06 19:45:09 by mcaseaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	virgule(char a, char b, char c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
	if (!(a == '7' && b == '8' && c == '9'))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char frst;
	char scnd;
	char thrd;

	frst = '0';
	scnd = '1';
	thrd = '2';
	while (frst < '9')
	{
		if (frst < scnd && scnd < thrd)
		{
			virgule(frst, scnd, thrd);
		}
		thrd++;
		if (thrd > '9')
		{
			thrd = '0';
			scnd++;
		}
		if (scnd > '9')
		{
			scnd = '0';
			frst++;
		}
	}
}
