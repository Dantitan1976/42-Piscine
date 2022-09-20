/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 19:16:22 by dramirez          #+#    #+#             */
/*   Updated: 2022/08/22 18:39:45 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	dividendo;
	int	divisor;
	int	div;
	int	mod;

	dividendo = -26;
	divisor = 3;
	div = 0;
	mod = 0;
	ft_div_mod(dividendo, divisor, &div, &mod);
	printf("%d\n%d", div, mod);
}
