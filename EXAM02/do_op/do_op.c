/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/21 18:52:32 by exam              #+#    #+#             */
/*   Updated: 2017/07/21 19:08:30 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int a;
	int b;
	
	if(argc == 4)
	{	
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if(argv[2][0] == '+')
		printf("%d",a + b);
	else if(argv[2][0] == '-')
		printf("%d",a - b);
	else if(argv[2][0] == '*')
		printf("%d", a * b);
	else if(argv[2][0] == '/')
		printf("%d", a / b);
	else if(argv[2][0] == '%')
		printf("%d", a % b);
	}
	printf("\n");	
	return(0);
}
