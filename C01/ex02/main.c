/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 23:21:18 by dramirez          #+#    #+#             */
/*   Updated: 2022/08/18 17:53:02 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	i1;
	int	i2;

	i1 = 1000;
	i2 = 2000;
	printf("Antes de función los valores son:%d, %d\n", i1, i2);
	ft_swap(&i1, &i2);
	printf("Valor despues de función:%d, %d\n", i1, i2);
}
