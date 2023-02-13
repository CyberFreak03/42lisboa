/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-b <glopes-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 12:15:33 by leonpere          #+#    #+#             */
/*   Updated: 2023/02/05 16:18:41 by glopes-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	a;

	a = 0;
	while (src[a] != '\0' && a < n)
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}


int	main(void)
{
	char	src[] = "Hello!";
	char	dest[] = "Jinjer1";
	char	dest1[] = "Jinjer2";

	printf("%s", ft_strncpy(dest, src, 3));
	printf("\n%s", strncpy(dest, src, 5));
	printf("\n%s", ft_strncpy(dest1, src, 3));
	printf("\n%s", strncpy(dest1, src, 5));

}

