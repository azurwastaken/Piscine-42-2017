/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaseaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 16:22:35 by mcaseaux          #+#    #+#             */
/*   Updated: 2017/07/09 11:39:51 by mcaseaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int		i;
	long	fact_nb;

	if (nb == 0)
		return (1);
	fact_nb = nb;
	i = nb - 1;
	while (i > 0 && fact_nb <= 2147483647)
	{
		fact_nb = fact_nb * i;
		i--;
	}
	if (nb < 0 || fact_nb > 2147483647)
		return (0);
	nb = (int)fact_nb;
	return (nb);
}
