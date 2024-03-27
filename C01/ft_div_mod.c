/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttas <ttas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 09:05:04 by ttas              #+#    #+#             */
/*   Updated: 2024/03/18 14:25:10 by ttas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int numA = 48;
	int numB = 30;
	int valDiv = 0;
	int valMod = 0;
	printf("les valeurs avant ft_div_mod sont: a = %d, b = %d\n", numA, numB);
	ft_div_mod(numA, numB, &valDiv, &valMod);
	printf("les valeurs apres ft_div_mod sont: div = %d, mod = %d\n", valDiv,
		valMod);
 return(0);
}*/