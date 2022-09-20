/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 12:22:33 by dramirez          #+#    #+#             */
/*   Updated: 2022/08/22 14:17:43 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

void	print_array(int *tab, int size)
{
	int	pos_1;

	pos_1 = 0;
	while (pos_1 < size)
	{
		printf("%d ", *(tab + pos_1));
		pos_1++;
	}
}

int	main(void)
{
	int	tab[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int	size;

	size = 10;
	printf("Este es el array al que le vamos a dar la vuelta: \n");
	print_array(tab, size);
	ft_rev_int_tab(tab, size);
	printf("\nEste es el resultado:\n");
	print_array(tab, size);
	return (0);
}
