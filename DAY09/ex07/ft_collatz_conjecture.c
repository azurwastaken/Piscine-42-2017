/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaseaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 00:30:37 by mcaseaux          #+#    #+#             */
/*   Updated: 2017/07/14 16:20:48 by mcaseaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_auxil(unsigned int base, unsigned int indice)
{
	if (base == 1)
		return (indice);
	else if (base % 2 == 0)
		return (ft_auxil(base / 2, indice + 1));
	else if (base % 2 == 1)
		return (ft_auxil(base * 3 + 1, indice + 1));
	return (0);
}

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	return (ft_auxil(base, 0));
}
