/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hishikaw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 17:44:53 by hishikaw          #+#    #+#             */
/*   Updated: 2023/02/13 11:56:18 by hishikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	y;

	i = 0;
	y = 0;
	while (dest[i] != '\0')
		i++;
	while (y < nb && src[y] != '\0')
	{
		dest[i + y] = src [y];
		y++;
	}
	dest[i + y] = '\0';
	return (dest);
}

int	main()
{
	char src[] = "Isabella";
	char dest[] = "Hello";
	printf("%s", ft_strncat(dest, src, 4));
}
