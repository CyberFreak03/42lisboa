/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-b <glopes-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 15:07:08 by dioserra          #+#    #+#             */
/*   Updated: 2023/02/12 11:31:28 by glopes-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char *src;
// 	char *dest;
// 	char *ret;

// 	src = calloc(11, sizeof(char));
// 	src = "0123456789";
// 	dest = calloc(11, sizeof(char));
// 	ret = ft_strcpy(dest, src);	
// 	printf("src: %s\n", src);
// 	printf("dest: %s\n", dest);
// 	printf("ret: %s\n", ret);
// 	return (0);
// }
