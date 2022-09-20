/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 12:41:32 by dramirez          #+#    #+#             */
/*   Updated: 2022/08/29 14:14:56 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char cadena1[] = "Mi casa es blanca ";
	char cadena2[] = "Mi casa es blanca";
	
	ft_strcmp(cadena1, cadena2);
	printf("La diferencia de caracteres es de %d", ft_strcmp(cadena1, cadena2));
	return (0);
}
