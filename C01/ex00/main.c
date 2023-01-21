/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 12:17:17 by dramirez          #+#    #+#             */
/*   Updated: 2023/01/21 22:20:55 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int	a;
	int	*p_a;

	a = 522;
	p_a = &a;
	printf("Valor antes de la funcion: %d\n", a);
	ft_ft(p_a);
	printf("Valor despues de la funcion: %d\n", a);
	return (0);
}
