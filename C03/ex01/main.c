/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 15:56:42 by dramirez          #+#    #+#             */
/*   Updated: 2022/08/31 14:53:45 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char cadena1[] = "0123456789 ";
	char cadena2[] = "0123456789";
	int		numero;

	numero = 20;

	ft_strncmp(cadena1, cadena2, numero);
	printf("Cadena 1: %s\n", cadena1);
	printf("Cadena 2: %s\n", cadena2);
	printf("Comparamos %d caracteres\n", numero);
	printf("El resultado es: %d\n", ft_strncmp(cadena1, cadena2, numero));
	printf("El resultado es: %d\n", strncmp(cadena1, cadena2, numero));
	return (0);
}
