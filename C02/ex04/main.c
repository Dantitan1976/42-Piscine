/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 18:38:34 by dramirez          #+#    #+#             */
/*   Updated: 2022/08/28 19:22:27 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char	str[] = "aaasds11dssdasaassdfaaaa";
	int		valor;

	valor = ft_str_is_lowercase(str);
	printf("Cadena antes de funcion: %s\n", str);
	printf("Tiene solo minusculas: %i\n", valor);
	return (0);
}
