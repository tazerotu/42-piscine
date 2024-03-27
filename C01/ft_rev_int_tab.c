/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttas <ttas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 10:11:53 by ttas              #+#    #+#             */
/*   Updated: 2024/03/18 14:24:30 by ttas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	tempsize;
	int	tempvalue;

	tempsize = 0;
	while (tempsize != (size / 2))
	{
		tempvalue = tab[tempsize];
		tab[tempsize] = tab[((size - 1) - tempsize)];
		tab[((size - 1) - tempsize)] = tempvalue;
		tempsize++;
	}
}

/*
int	main(void)
{
	int size = 6;
	int tableau[size];
	tableau[0] = 1;
	tableau[1] = 9;
	tableau[2] = 5;
	tableau[3] = 7;
	tableau[4] = 2;
	tableau[5] = 4;
	int i = 0;
	printf("le tableau avant les changement: ");
	while (i < size)
	{
		printf("%d", tableau[i]);
		i++;
	}
	printf("\n\n");
	ft_rev_int_tab(tableau, size);
	i = 0;
	printf("le tableau apres les changement: ");
	while (i < size)
	{
		printf("%d", tableau[i]);
		i++;
	}
	printf("\n");
	return (0);
}*/