/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 19:14:00 by dramirez          #+#    #+#             */
/*   Updated: 2022/08/28 19:23:37 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	int		valor;
	char	str[] = "ASFDASCCCEER";

	valor = ft_str_is_uppercase(str);
	printf("Cadena a revisar: %s\n", str);
	printf("Son mayusculas: %i\n", valor);
	return (0);
}
