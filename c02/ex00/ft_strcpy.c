/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-b <glopes-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:12:40 by glopes-b          #+#    #+#             */
/*   Updated: 2023/02/04 16:56:47 by glopes-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	chn_val;

	chn_val = 0;
	while (*(src + chn_val) != '\0')
	{
		*(dest + chn_val) = *(src + chn_val);
		chn_val++;
	}
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