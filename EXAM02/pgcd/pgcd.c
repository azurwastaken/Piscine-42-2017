/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/21 19:12:43 by exam              #+#    #+#             */
/*   Updated: 2017/07/21 19:28:36 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int pgcd(int a, int b)
{
	int res = 1;
	int test = 1;

	if(a == b)
		return(a);
	else if (a < b)
	{
		while (test <= a)
		{
			if((a % test == 0) && (b % test == 0))
				res = test;
			test++;		
		}
	}
	else if (a > b)
	{
		while (test <= b)
		{
			if((a % test == 0) && (b % test == 0))
				res = test;
			test++;
		}
	}	
	return(res);
}

int main(int argc, char **argv)
{
	int a;
	int b;

	if(argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d",pgcd(a,b));
	}
	printf("\n");
	return(0);
}
