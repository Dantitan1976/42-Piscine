/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 18:31:52 by dramirez          #+#    #+#             */
/*   Updated: 2022/08/24 20:43:40 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	posicion;

	posicion = 0;
	if (str[posicion] == '\0')
		return (1);
	while (str[posicion] != '\0')
	{
		if (!(str[posicion] >= 97 && str[posicion] <= 122))
			return (0);
	posicion++;
	}
	return (1);
}
