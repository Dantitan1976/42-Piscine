/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 21:22:07 by dramirez          #+#    #+#             */
/*   Updated: 2022/08/24 22:18:35 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char	str[] = "mi casa es blanca";

	printf("Cadena original %s", str);
	ft_strupcase(str);
	printf("\nCadena despues de funcion: %s\n", str);
	return (0);
}
