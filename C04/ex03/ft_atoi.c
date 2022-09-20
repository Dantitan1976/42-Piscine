/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 16:16:24 by dramirez          #+#    #+#             */
/*   Updated: 2022/09/01 19:53:29 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	cont;
	int	signo;
	int	numeros;

	cont = 0;
	signo = 1;
	numeros = 0;
	while (str[cont] == 32 || (str[cont] >= 9 && str[cont] <= 13))
		cont++;
	while (str[cont] == '-' || str[cont] == '+')
	{
		if (str[cont] == '-')
			signo = -signo;
		cont++;
	}
	while (str[cont] >= '0' && str[cont] <= '9')
	{
			numeros = numeros * 10 + (str[cont] - '0');
			cont++;
	}
	return (numeros * signo);
}
