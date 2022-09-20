/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 22:58:49 by dramirez          #+#    #+#             */
/*   Updated: 2022/08/24 20:39:13 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	posicion;

	posicion = 0;
	if (str[posicion] == '\0')
		return (1);
	while (str[posicion] != '\0')
	{		
		if (!((str[posicion] >= 'A' && str[posicion] <= 'Z')
				|| (str[posicion] >= 'a' && str[posicion] <= 'z')))
			return (0);
	posicion++;
	}
	return (1);
}

	/*
	 * int is_alpha;
	 * is_alpha = 1;
	 *while(*str)
	 {
	 	if (!((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z')))
		is_alpha = 0;
	return (is_alpha);*/
