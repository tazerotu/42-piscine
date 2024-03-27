/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttas <ttas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 10:06:32 by ttas              #+#    #+#             */
/*   Updated: 2024/03/18 14:24:41 by ttas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
int	main(void)
{
	printf("le message est: ceci est un message de 73 characteres\n\n");
	int i = ft_strlen("ceci est un message de 37 characteres");
	printf("le nombres de characteres est de : %d characteres\n", i);
	return (0);
} */