/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 17:19:02 by dramirez          #+#    #+#             */
/*   Updated: 2022/08/22 18:48:21 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char	texto[] = "Hola mundo cruel";
	int		digitos;

	ft_strlen(texto);
	digitos = ft_strlen(texto);
	printf("El numero de caracteres del texto es: %d\n", digitos);
	return (0);
}
