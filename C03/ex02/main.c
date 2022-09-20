/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 21:15:01 by dramirez          #+#    #+#             */
/*   Updated: 2022/08/29 21:18:59 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char src[20] = "Daniel";
	char dest[20] = "Ramirez";
	printf("Cadena 1: %s\n", src);
	printf("Cadena 2: %s\n", dest);
	printf("Cadena resultante: %s\n", ft_strcat(dest, src));
}
