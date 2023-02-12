/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-b <glopes-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 16:16:04 by glopes-b          #+#    #+#             */
/*   Updated: 2023/02/09 16:30:40 by glopes-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*temp;

	temp = dest;
	while (*temp != '\0')
	{
		temp++;
	}
	while (*src != '\0' && nb > 0)
	{
		*temp = *(unsigned char *)src;
		temp++;
		src++;
		nb--;
	}
	*temp = '\0';
	return (dest);
}

// int	main(void)
// {
// 	int		nb;
// 	char	*src;
// 	char	*dest;
// 	char	*ft_src;
// 	char	*ft_dest;
// 	char	*buff;
// 	char	*ft_buff;

// 	src = calloc(7, sizeof(char));
// 	dest = calloc(12, sizeof(char));
// 	ft_src = calloc(12, sizeof(char));
// 	ft_dest = calloc(12, sizeof(char));
// 	strcpy(src, "galera");
// 	strcpy(ft_src, "galera");
// 	strcpy(dest, "alo ");
// 	strcpy(ft_dest, "alo ");
// 	nb = 13;
// 	buff = strncat(dest, src, nb);
// 	ft_buff = ft_strncat(ft_dest, ft_src, nb);
// 	if (ft_dest != ft_buff)
// 		printf("[1] KO");
// 	else if (strcmp(buff, ft_buff) != 0)
// 	{
// 		printf("[1] KO");
// 		return (1);
// 	}
// 	else
// 		printf("[1] OK, nb = %02d, result=%s\n", nb, ft_buff);
// 	nb = 4;
// 	strcpy(src, "galera");
// 	strcpy(ft_src, "galera");
// 	strcpy(dest, "alo ");
// 	strcpy(ft_dest, "alo ");
// 	buff = strncat(dest, src, nb);
// 	ft_buff = ft_strncat(ft_dest, ft_src, nb);
// 	if (ft_dest != ft_buff)
// 		printf("[2] KO");
// 	else if (strcmp(buff, ft_buff) != 0)
// 	{
// 		printf("[2] KO");
// 		return (1);
// 	}
// 	else
// 		printf("[2] OK, nb = %02d, result=%s\n", nb, ft_buff);
// 	nb = 0;
// 	strcpy(src, "galera");
// 	strcpy(ft_src, "galera");
// 	strcpy(dest, "alo ");
// 	strcpy(ft_dest, "alo ");
// 	buff = strncat(dest, src, nb);
// 	ft_buff = ft_strncat(ft_dest, ft_src, nb);
// 	if (ft_dest != ft_buff)
// 		printf("KO");
// 	else if (strcmp(buff, ft_buff) != 0)
// 	{
// 		printf("[3] KO");
// 		return (1);
// 	}
// 	else
// 		printf("[3] OK, nb = %02d, result=%s\n", nb, ft_buff);
// 	return (0);
// }
