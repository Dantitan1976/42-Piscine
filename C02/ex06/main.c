/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 20:20:36 by dramirez          #+#    #+#             */
/*   Updated: 2022/08/28 19:25:30 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char	str[] = "lkjaljhÑsagdlfjahgtytuyt8734876AAA";
	int		valor;

	valor = ft_str_is_printable(str);
	printf ("Cadena antes de funcion: %s\n", str);
	printf ("Es imprimible: %i\n", valor);
	return (0);
}
