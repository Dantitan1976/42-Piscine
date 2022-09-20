/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 21:17:27 by dramirez          #+#    #+#             */
/*   Updated: 2022/08/22 21:17:42 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	char	cadena;
	int		posicion;

	posicion = 0;
	while (str[posicion] != '\0')
	{
		cadena = str[posicion];
		write(1, &cadena, 1);
		posicion++;
	}
}
