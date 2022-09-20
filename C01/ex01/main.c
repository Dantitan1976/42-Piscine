/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 18:23:03 by dramirez          #+#    #+#             */
/*   Updated: 2022/08/22 18:37:32 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int	a;
	int	*prim_a;
	int	**seg_a;
	int	***terc_a;
	int	****cuart_a;
	int	*****quint_a;
	int	******sext_a;
	int	*******sept_a;
	int	********oct_a;
	int	*********nov_a;

	a = 100;
	prim_a = &a;
	seg_a = &prim_a;
	terc_a = &seg_a;
	cuart_a = &terc_a;
	quint_a = &cuart_a;
	sext_a = &quint_a;
	sept_a = &sext_a;
	oct_a = &sept_a;
	nov_a = &oct_a;
	printf("Valor antes de la funcion: %d\n", a);
	ft_ultimate_ft(nov_a);
	printf("Valor despues de la funcion: %d\n", a);
}
