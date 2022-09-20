/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 13:55:22 by dramirez          #+#    #+#             */
/*   Updated: 2022/08/23 21:44:35 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	posicion;

	posicion = 0;
	while (src[posicion] != '\0')
	{
		dest[posicion] = src[posicion];
		posicion++;
	}
	dest[posicion] = '\0';
	return (dest);
}
