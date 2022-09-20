/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 14:44:54 by dramirez          #+#    #+#             */
/*   Updated: 2022/08/28 17:00:24 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strminusculas(char *str)
{
	int	contador;

	contador = 0;
	while (str[contador] != '\0')
	{	
		if (str[contador] >= 'A' && str[contador] <= 'Z')
		{
			str[contador] = str[contador] + 32;
		}
		contador++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	caracteres;
	int	letra1;

	caracteres = 0;
	letra1 = 1;
	ft_strminusculas(str);
	while (str[caracteres] != '\0')
	{
		if (str[caracteres] >= 'a' && str[caracteres] <= 'z')
		{
			if (letra1 == 1)
			{
				str[caracteres] = str[caracteres] - 32;
			}
			letra1 = 0;
		}
		else if (str[caracteres] >= '0' && str[caracteres] <= '9')
			letra1 = 0;
		else
			letra1 = 1;
		caracteres++;
	}
	return (str);
}
