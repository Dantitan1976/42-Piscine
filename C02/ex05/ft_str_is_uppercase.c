/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 19:06:23 by dramirez          #+#    #+#             */
/*   Updated: 2022/08/24 20:46:20 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	posicion;

	posicion = 0;
	if (str[posicion] == '\0')
		return (1);
	while (str[posicion] != '\0')
	{
		if (!(str[posicion] >= 65 && str[posicion] <= 90))
			return (0);
	posicion++;
	}
	return (1);
}
