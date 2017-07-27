/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaseaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 01:41:53 by mcaseaux          #+#    #+#             */
/*   Updated: 2017/07/10 13:07:15 by mcaseaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_letter(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

int	ft_str_is_lowercase(char *str)
{
	int i;

	i = 0;
	while (is_letter(str[i]))
		i++;
	if (str[i] == '\0')
		return (1);
	else
		return (0);
}
