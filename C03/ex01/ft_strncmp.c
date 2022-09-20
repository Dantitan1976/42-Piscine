/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 15:36:09 by dramirez          #+#    #+#             */
/*   Updated: 2022/08/30 21:27:28 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	contador;

	contador = 0;
	while ((s1[contador] != '\0' || s2[contador] != '\0') && contador < n)
	{
		if (s1[contador] != s2[contador])
		{
			return (s1[contador] - s2[contador]);
		}
		contador++;
	}
	return (0);
}
