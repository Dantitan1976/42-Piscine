/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 13:24:20 by dramirez          #+#    #+#             */
/*   Updated: 2022/09/01 21:04:31 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char cad1 [] = "Hola cara cola";

	printf("Cadena 1: %s\n", cad1);
	printf("Contiene %d caracteres\n", ft_strlen(cad1));
	return (0);
}
