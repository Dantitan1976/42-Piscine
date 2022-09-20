/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 12:43:38 by dramirez          #+#    #+#             */
/*   Updated: 2022/08/16 19:04:23 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb2(void)

{
	int	num1;
	int	num2;

	num1 = 0;
	while (num1 <= 99)
	{
		num2 = 1;
		while (num2 <= 99)
		{						
			if (num1 < num2)
			{
				ft_putchar(num1 / 10 + '0');
				ft_putchar(num1 % 10 + '0');
				write (1, " ", 1);
				ft_putchar(num2 / 10 + '0');
				ft_putchar(num2 % 10 + '0');
				if (num1 != 98)
					write (1, ", ", 2);
			}
			num2++;
		}
		num1++;
	}
}
