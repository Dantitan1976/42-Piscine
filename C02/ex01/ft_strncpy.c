/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 20:24:26 by dramirez          #+#    #+#             */
/*   Updated: 2022/08/27 20:49:58 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	posicion;

	posicion = 0;
	while (src[posicion] != '\0' && posicion < n)
	{
		dest[posicion] = src[posicion];
		posicion++;
	}
	while (posicion < n)
	{
		dest[posicion] = '\0';
		posicion++;
	}
	return (dest);
}
