/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 15:09:18 by dramirez          #+#    #+#             */
/*   Updated: 2022/08/24 18:01:51 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	posicion;

	posicion = 0;
	if (str[posicion] == '\0')
		return (1);
	while (str[posicion] != '\0')
	{
		if (!(str[posicion] >= 48 && str[posicion] <= 57))
			return (0);
	posicion++;
	}
	return (1);
}
