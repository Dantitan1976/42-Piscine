/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 22:22:12 by dramirez          #+#    #+#             */
/*   Updated: 2022/08/28 17:05:00 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	posicion;

	posicion = 0;
	while (str[posicion] != '\0')
	{
		if (str[posicion] >= 65 && str[posicion] <= 90)
		{
			str[posicion] = str[posicion] + 32;
		}
		posicion++;
	}
	return (str);
}
