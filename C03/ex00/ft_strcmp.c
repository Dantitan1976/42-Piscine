/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 12:13:38 by dramirez          #+#    #+#             */
/*   Updated: 2022/08/30 17:51:53 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	contador;

	contador = 0;
	while (s1[contador] != '\0' || s2[contador] != '\0')
	{
		if (s1[contador] != s2[contador])
		{
			return (s1[contador] - s2[contador]);
		}
		contador++;
	}
	return (0);
}
