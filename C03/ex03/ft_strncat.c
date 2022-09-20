/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 21:53:40 by dramirez          #+#    #+#             */
/*   Updated: 2022/08/30 17:56:27 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	c_src;
	unsigned int	c_dest;

	c_dest = 0;
	while (dest[c_dest] != '\0')
	{
		c_dest++;
	}
	c_src = 0;
	while (src[c_src] != '\0' && c_src < nb)
	{
		dest[c_dest] = src[c_src];
		c_dest++;
		c_src++;
	}
	dest[c_dest] = '\0';
	return (dest);
}
