/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttas <ttas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 09:00:06 by ttas              #+#    #+#             */
/*   Updated: 2024/03/18 14:25:18 by ttas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp_value;

	temp_value = *a;
	*a = *b;
	*b = temp_value;
}
/*
int	main(void)
{
	int num1 = 42;
	int num2 = 24;
	printf("les valeurs avant ft_swap: a = %d, b = %d\n", num1, num2);
	ft_swap(&num1, &num2);
	printf("les valeurs après ft_swap: a = %d, b = %d\n", num1, num2);
	return(0);
}*/