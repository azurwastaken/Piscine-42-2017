/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaseaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 23:42:55 by mcaseaux          #+#    #+#             */
/*   Updated: 2017/07/10 14:48:36 by mcaseaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_letter(char c)
{
	int i;

	i = 0;
	if (c >= 'a' && c <= 'z')
		i = 1;
	if (c >= 'A' && c <= 'Z')
		i = 2;
	if (c >= '0' && c <= '9')
		i = 3;
	return (i);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 1;
	if (is_letter(str[0]) == 1)
		str[0] -= 32;
	while (str[i] != '\0')
	{
		if (is_letter(str[i]))
		{
			if (is_letter(str[i - 1]) && is_letter(str[i]) == 2)
				str[i] += 32;
			else if (is_letter(str[i]) == 1 && !(is_letter(str[i - 1])))
				str[i] -= 32;
			if (is_letter(str[i - 1]) == 3 && is_letter(str[i]) == 2)
				str[i] += 32;
		}
		i++;
	}
	return (str);
}
