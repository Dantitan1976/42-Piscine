/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 22:29:27 by dramirez          #+#    #+#             */
/*   Updated: 2022/08/28 17:03:28 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char	str[] = "MI CASA ES BLANCA";

	printf("Cadena antes de funcion: %s\n", str);
	ft_strlowcase(str);
	printf("Cadena despues de funcion: %s\n", str);
	return (0);
}
