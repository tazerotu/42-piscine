/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttas <ttas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 09:12:33 by ttas              #+#    #+#             */
/*   Updated: 2024/03/18 14:25:03 by ttas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = 0;
	mod = 0;
	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
int	main(void)
{
	int ValA = 48;
	int ValB = 17;

	printf("Les valeurs de A et B sont: A = %d, B = %d\n", ValA, ValB);
	ft_ultimate_div_mod(&ValA, &ValB);
	printf("les valeurs apres ft_ultimate_div_swap sont: A = %d, B = %d\n",
		ValA, ValB);
	return (0);
}*/