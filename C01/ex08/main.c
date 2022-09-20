/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 21:52:41 by dramirez          #+#    #+#             */
/*   Updated: 2022/08/22 23:38:00 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

void	imprimirarray(int *tab, int size)
{
	int	pos_1;

	pos_1 = 0;
	while (pos_1 < size)
	{
		printf("%d, ", *(tab + pos_1));
		pos_1++;
	}
}

int	main(void)
{
	int	tab[5] = {10, 15, 8, 1, 26};
	int	size;

	size = 5;
	printf("El array original es : \n");
	imprimirarray(tab, size);
	ft_sort_int_tab(tab, size);
	printf("\nEste es el resultado; \n");
	imprimirarray(tab, size);
	return (0);
}
