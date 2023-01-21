/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 21:56:51 by dramirez          #+#    #+#             */
/*   Updated: 2023/01/21 22:12:18 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putsalida(int n, int*tab, int pos)
{
	int	i;

	if (pos == 1)
	{
		ft_putchar (',');
		ft_putchar (' ');
	}
	i = 0;
	while (i < n)
	{
		ft_putchar (tab[i] + '0');
		i++;
	}
}

void	ft_print_incremento(int n, int *tab)
{
	int	i;
	int	max;

	i = n -1;
	max = 9;
	while (tab[i] == max)
	{
		i -= 1;
		max -= 1;
	}
	tab[i] += 1;
	while (i < n)
	{
		tab[i + 1] = tab[i] + 1;
		i += 1;
	}
}

void	ft_print_combn(int n)
{
	int	tab[10];
	int	i;

	i = 0;
	while (i < n)
	{
		tab[i] = i;
		i++;
	}
	ft_putsalida (n, tab, 0);
	while (tab[0] != 10 - n || tab[n - 1] != 9)
	{
		if (tab[n - 1] != 9)
		{
			tab[n - 1] += 1;
		}
		else
		{
			ft_print_incremento(n, tab);
		}
		ft_putsalida(n, tab, 1);
	}
}
