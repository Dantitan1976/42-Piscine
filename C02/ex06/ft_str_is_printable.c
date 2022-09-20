/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 20:14:02 by dramirez          #+#    #+#             */
/*   Updated: 2022/08/24 20:51:36 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	posicion;

	posicion = 0;
	if (str[posicion] == '\0')
		return (1);
	while (str[posicion] != '\0')
	{
		if (!(str[posicion] >= 32 && str[posicion] <= 126))
			return (0);
		posicion ++;
	}
	return (1);
}
