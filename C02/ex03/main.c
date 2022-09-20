/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 17:40:50 by dramirez          #+#    #+#             */
/*   Updated: 2022/08/28 19:21:08 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char	str[] = "32467654321a2332";
	int		valor;

	valor = ft_str_is_numeric(str);
	printf("\nCadena origen: %s\n", str);
	printf("\nEs solo numeros: %i\n", valor);
	return (0);
}
