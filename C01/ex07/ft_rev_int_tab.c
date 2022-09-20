/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 12:17:17 by dramirez          #+#    #+#             */
/*   Updated: 2022/08/22 14:08:27 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	pos_1;
	int	pos_2;
	int	aux;

	pos_1 = 0;
	pos_2 = size -1;
	while (pos_1 <= pos_2)
	{
		aux = tab[pos_2];
		tab[pos_2] = tab[pos_1];
		tab[pos_1] = aux;
		pos_1++;
		pos_2--;
	}
}
