/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 21:52:41 by dramirez          #+#    #+#             */
/*   Updated: 2022/08/24 20:36:38 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	dest[500];
	char	src[] = "Hola mundo perdido";

	printf("\nCadena origen: %s\n", src);
	ft_strcpy(dest, src);
	printf("\nCadena destino: %s\n", dest);
	return (0);
}
