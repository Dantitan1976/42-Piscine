/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 19:23:29 by dramirez          #+#    #+#             */
/*   Updated: 2022/08/28 22:03:06 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	contador;

	contador = 0;
	while (str[contador] != '\0')
		contador++;
	return(contador);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	posicion;
	unsigned int	posicion2;

	posicion = 0;
	posicion2 = ft_strlen(src);

	if (size != 0)
	{
		while (src[posicion] != '\0' && posicion < size - 1)
		{
			dest[posicion] = src[posicion];
			posicion++;
		}
		dest[posicion] = '\0';
	}
	return (posicion2);
}
