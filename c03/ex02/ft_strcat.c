/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-b <glopes-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 19:01:04 by glopes-b          #+#    #+#             */
/*   Updated: 2023/02/09 16:23:40 by glopes-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*temp;

	temp = dest;
	while (*temp != '\0')
	{
		temp++;
	}
	while (*src != '\0')
	{
		*temp = *(unsigned char *)src;
		temp++;
		src++;
	}
	*temp = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char *src;
// 	char *dest;
// 	char *ft_src;
// 	char *ft_dest;
// 	char *result;
// 	char *ft_result;

// 	src = calloc(7, sizeof(char));
// 	dest = calloc(12, sizeof(char));
// 	ft_src = calloc(7, sizeof(char));
// 	ft_dest = calloc(12, sizeof(char));
// 	strcpy(src, "galera");
// 	strcpy(dest, "alo ");
// 	strcpy(ft_src, "galera");
// 	strcpy(ft_dest, "alo ");
// 	result = strcat(dest, src);
// 	ft_result = ft_strcat(ft_dest, ft_src);
// 	if (ft_dest != ft_result)
// 		printf("NOK", ft_result, ft_dest);
// 	else if (strcmp(result, ft_result) != 0)
// 		printf("NOK", strcmp(result, ft_result));
// 	else
// 		printf("OK.\nresult: %s\n", ft_result);
// 	return (0);
// }