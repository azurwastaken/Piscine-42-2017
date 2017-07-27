/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_active_bits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaseaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 15:26:44 by mcaseaux          #+#    #+#             */
/*   Updated: 2017/07/14 16:31:46 by mcaseaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned long	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power > 0)
		return (nb * ft_recursive_power(nb, power - 1));
	return (0);
}

unsigned int	check_power(unsigned int value)
{
	int power;

	power = 0;
	while (ft_recursive_power(2, power) <= value)
		power++;
	if (ft_recursive_power(2, power) > value)
		power--;
	return (power);
}

int				fin(int *base_two, int i)
{
	int j;
	int res;

	j = 0;
	res = 0;
	while (j < i)
	{
		if (base_two[j] == 1)
			res++;
		j++;
	}
	return (res);
}

unsigned int	ft_active_bits(int value)
{
	int				base_two[32];
	long			val;
	int				power;
	int				i;
	int				j;

	val = (long)value + 2147483648;
	power = check_power(val);
	i = 0;
	while (val > 0)
	{
		if (val <= ft_recursive_power(2, power))
		{
			val -= ft_recursive_power(2, power);
			base_two[i] = 1;
			power--;
			i++;
		}
		else
		{
			base_two[i] = 0;
			i++;
		}
	}
	return (fin(base_two, i));
}
