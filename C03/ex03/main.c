/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 22:13:48 by dramirez          #+#    #+#             */
/*   Updated: 2022/08/30 20:47:57 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char	cadena1[] = "Daniel";
	char	cadena2[] = "Ramirez";
	int n;

	n = 4;
	printf("Cadena1: %s\n", cadena1);
	printf("Cadena2: %s\n", cadena2);
	printf("Copio %d caracteres\n", n);
	printf("Resultado: %s\n", ft_strncat(cadena1, cadena2, n));
}
