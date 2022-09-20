/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 21:21:00 by dramirez          #+#    #+#             */
/*   Updated: 2022/08/22 22:23:46 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	contador;
	int	comparador;
	int	aux;

	contador = 0;
	while (contador < size -1)
	{
		comparador = contador + 1;
		while (comparador < size)
		{
			if (tab[contador] > tab[comparador])
			{
				aux = tab[contador];
				tab[contador] = tab[comparador];
				tab[comparador] = aux;
			}
			comparador++;
		}
		contador++;
	}
}
