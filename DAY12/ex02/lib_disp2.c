/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_disp2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaseaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 09:33:53 by mcaseaux          #+#    #+#             */
/*   Updated: 2017/07/23 09:34:42 by mcaseaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int number;
	int negative;

	number = 0;
	negative = 0;
	if (!str)
		return (0);
	while (*str == ' ' || *str == '\n' || *str == '\v'
			|| *str == '\f' || *str == '\r' || *str == '\t')
		++str;
	if (*str == '-' || *str == '+')
		negative = (*str++ == '-') ? 1 : 0;
	while (*str >= '0' && *str <= '9')
	{
		number = number * 10;
		number = number + *str++ - '0';
	}
	return ((negative) ? number * -1 : number);
}
