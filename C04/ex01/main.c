/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 13:49:32 by dramirez          #+#    #+#             */
/*   Updated: 2022/09/01 14:38:32 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putstr(char *str);

int	main(void)
{
	char    cad1[] = "Hola cara cola";

	printf("Cadena con print: %s\n:", cad1);
	ft_putstr(cad1);
	return (0);
}
