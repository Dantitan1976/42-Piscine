/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 20:53:55 by dramirez          #+#    #+#             */
/*   Updated: 2022/08/28 20:55:21 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	dst1[] = "Mi casa es de color blanco";
	char	dst2[] = "Mi casa es de color blanco";
	char	src1[] = "Me encantan las papas fritas del Paco";
	int		n;

	n = 5;
	printf("\nCadena origen: %s\n", src1);
	printf("Cadena destino: %s\n", dst1);
	printf("Copio %d caracteres en la cadena de destino\n", n);
	printf("Yo devuelvo %u caracteres\n", ft_strlcpy(dst1, src1, n));
	printf("Yo copio: %s en la cadena de destino\n\n", dst1);
	printf("El devuelve: %lu caracteres\n", strlcpy(dst2, src1, n));
	printf("El copia: %s en la cadena de destino\n", dst2);
	return (0);
}
