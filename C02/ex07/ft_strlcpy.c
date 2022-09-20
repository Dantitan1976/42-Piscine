/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 19:23:29 by dramirez          #+#    #+#             */
/*   Updated: 2022/08/28 16:54:54 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	posicion;
	unsigned int	posicion2;

	posicion = 0;
	posicion2 = 0;
	while (src[posicion] != '\0')
	{
		posicion++;
	}
	while ((src[posicion2] != '\0') && (posicion2 < (size - 1)))
	{
		dest[posicion2] = src[posicion2];
		posicion2++;
	}
	dest[posicion2] = '\0';
	return (posicion);
}
