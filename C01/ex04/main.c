/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 19:16:22 by dramirez          #+#    #+#             */
/*   Updated: 2022/08/22 18:41:05 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	div_1;
	int	div_2;
	int	*puntero1;
	int	*puntero2;

	div_1 = 1234;
	div_2 = 30;
	puntero1 = &div_1;
	puntero2 = &div_2;
	ft_ultimate_div_mod(puntero1, puntero2);
	printf("Resultado de la división: %d\n", div_1);
	printf("Resto: %d\n", div_2);
}
