/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 17:19:02 by dramirez          #+#    #+#             */
/*   Updated: 2022/08/21 19:26:06 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int		posicion;

	posicion = 0;
	while (str[posicion] != '\0')
	{
		posicion++;
	}
	return (posicion);
}
