/*************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 21:52:41 by dramirez          #+#    #+#             */
/*   Updated: 2022/08/28 19:18:57 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char	str[] = "HASasdfaslkjhfalskh";
	int		valor;

	valor = ft_str_is_alpha(str);
	printf("\nCadena origen: %s\n", str);
	printf("\nEs de solo letras: %i\n", valor);
	return (0);
}
