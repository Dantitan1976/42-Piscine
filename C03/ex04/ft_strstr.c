/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 23:18:53 by dramirez          #+#    #+#             */
/*   Updated: 2022/08/30 21:42:48 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	num1;
	int	num2;

	num1 = 0;
	num2 = 0;
	if (to_find[num2] == '\0')
		return (str);
	while (str[num1] != '\0')
	{
		while (str[num1 + num2] != '\0' && str[num1 + num2] == to_find[num2])
			num2++;
		if (to_find[num2] == '\0')
			return (str + num1);
		num1++;
		num2 = 0;
	}
	return (0);
}
