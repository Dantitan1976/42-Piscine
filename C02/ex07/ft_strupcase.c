/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 20:55:41 by dramirez          #+#    #+#             */
/*   Updated: 2022/08/28 17:07:33 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	posicion;

	posicion = 0;
	while (str[posicion] != '\0')
	{
		if (str[posicion] >= 97 && str[posicion] <= 122)
		{
			str[posicion] = str[posicion] - 32;
		}
		posicion++;
	}
	return (str);
}
