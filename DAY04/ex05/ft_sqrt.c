/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaseaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 19:23:24 by mcaseaux          #+#    #+#             */
/*   Updated: 2017/07/08 23:09:30 by mcaseaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int tmp;

	tmp = 0;
	while (tmp * tmp < nb)
		tmp++;
	if (tmp * tmp == nb)
		return (tmp);
	else
		return (0);
}
