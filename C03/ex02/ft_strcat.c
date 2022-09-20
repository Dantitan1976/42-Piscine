/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 20:45:23 by dramirez          #+#    #+#             */
/*   Updated: 2022/08/29 22:11:57 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	c_src;
	int	c_dest;

	c_dest = 0;
	while (dest[c_dest] != '\0')
	{
		c_dest++;
	}
	c_src = 0;
	while (src[c_src] != '\0')
	{
		dest[c_dest] = src[c_src];
		c_dest++;
		c_src++;
	}
	dest[c_dest] = '\0';
	return (dest);
}
