/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 23:23:03 by dramirez          #+#    #+#             */
/*   Updated: 2022/08/31 14:58:24 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char str1[] = "Hola pichulas gordas como maromas del puerto";
	char str2[] = "s";

	printf("Str1 = %s\n", str1);
	printf("Str2 = %s\n", str2);
	printf("Str2 en Str1 = %s\n", strstr(str1, str2));
	printf("Str2 en Str1 = %s\n", ft_strstr(str1, str2));
	return (0);
}
