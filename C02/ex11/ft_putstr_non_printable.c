/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 14:17:18 by dramirez          #+#    #+#             */
/*   Updated: 2022/08/28 16:30:13 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	contador;

	contador = 0;
	while (str[contador] != '\0')
	{
		if (str[contador] < 32 || str[contador] > 126)
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[str[contador] / 16]);
			ft_putchar("0123456789abcdef"[str[contador] % 16]);
		}
		else
		{
			ft_putchar(str[contador]);
		}
		contador++;
	}
}
