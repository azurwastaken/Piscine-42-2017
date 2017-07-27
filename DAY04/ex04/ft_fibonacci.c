/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaseaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 18:53:16 by mcaseaux          #+#    #+#             */
/*   Updated: 2017/07/08 23:06:13 by mcaseaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index > 1)
		return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
	if (index == 1)
		return (1);
	if (index < 0)
		return (-1);
	return (0);
}
