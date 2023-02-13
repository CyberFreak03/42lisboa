/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-b <glopes-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 12:15:33 by leonpere          #+#    #+#             */
/*   Updated: 2023/02/05 16:18:13 by glopes-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	a;

	a = 0;
	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}


int	main(void)
{
	char	src[] = "Jinjer";
	char	src1[] = "Jinjer1";
	char	dest[] = "Pisces";
	char	dest1[] = "Pisces0";
	printf("%s", ft_strcpy(dest, src));
	printf("\n%s", ft_strcpy(dest1, src1));
}

