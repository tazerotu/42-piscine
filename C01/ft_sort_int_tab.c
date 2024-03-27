/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttas <ttas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 10:48:59 by ttas              #+#    #+#             */
/*   Updated: 2024/03/18 14:25:45 by ttas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	tempsize;
	int	tempvalue;
	int	count;

	size--;
	count = 0;
	tempsize = 0;
	while (count < size)
	{
		while (tab[tempsize] != '\0')
		{
			if (tab[tempsize] > tab[(tempsize + 1)] && (tempsize < size))
			{
				tempvalue = tab[tempsize];
				tab[tempsize] = tab[(tempsize + 1)];
				tab[(tempsize + 1)] = tempvalue;
			}
			tempsize++;
		}
		count++;
		tempsize = 0;
	}
}
/*
int	main(void)
{
	int size = 5;
	int tableau[(size - 1)];
	tableau[0] = 1;
	tableau[1] = 9;
	tableau[2] = 2;
	tableau[3] = 6;
	tableau[4] = 7;
	int i = 0;
	printf("le tableau avant les changement: ");
	while (i < size)
	{
		printf("%d", tableau[i]);
		i++;
	}
	printf("\n\n");
	ft_sort_int_tab(tableau, size);
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