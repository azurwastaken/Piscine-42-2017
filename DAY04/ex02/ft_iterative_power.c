/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaseaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 11:43:50 by mcaseaux          #+#    #+#             */
/*   Updated: 2017/07/09 11:44:30 by mcaseaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int tmp;

	tmp = nb;
	if (power > 0)
	{
		while ((power - 1) > 0)
		{
			nb = nb * tmp;
			power--;
		}
	}
	if (power == 0)
		nb = 1;
	if (power < 0)
		nb = 0;
	return (nb);
}
