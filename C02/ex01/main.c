/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 21:52:41 by dramirez          #+#    #+#             */
/*   Updated: 2022/08/23 22:01:54 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char			dest[500];
	char			src[] = "Jurassic World: Dominion";
	unsigned int	n = 18;

	printf("\nCadena origen: %s\n", src);
	ft_strncpy(dest, src, n);
	printf("\nCadena destino: %s\n", dest);
	return (0);
}
