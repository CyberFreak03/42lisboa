/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-b <glopes-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 16:34:17 by glopes-b          #+#    #+#             */
/*   Updated: 2023/02/09 18:42:44 by glopes-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*temp;

	temp = to_find;
	if (*to_find == '\0')
		return (str);
	while (true)
	{
		if (*temp == '\0')
			return ((char *)(str - (temp - to_find)));
		if (*str == *temp)
			temp++;
		else
			temp = to_find;
		if (*str == '\0')
			break ;
		str++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	*str;
// 	char	*to_find;
// 	char	*buff;
// 	char	*ft_buff;

// 	str = strcpy(calloc(11, sizeof(char)), "alo galera");
// 	to_find = strcpy(calloc(7, sizeof(char)), "galera");
// 	buff = strstr(str, to_find);
// 	ft_buff = ft_strstr(str, to_find);
// 	if (buff != ft_buff)
// 		printf("NOK");
// 	else
// 		printf("[1] OK. expected: %s result: %s\n", buff, ft_buff);
// 	str = strcpy(calloc(11, sizeof(char)), "alo galera");
// 	to_find = strcpy(calloc(7, sizeof(char)), "galerA");
// 	buff = strstr(str, to_find);
// 	ft_buff = ft_strstr(str, to_find);
// 	if (buff != ft_buff)
// 		printf("NOK");
// 	else
// 		printf("[2] OK. expected: %s result: %s\n", buff, ft_buff);
// 	str = strcpy(calloc(11, sizeof(char)), "alo galera");
// 	to_find = strcpy(calloc(1, sizeof(char)), "");
// 	buff = strstr(str, to_find);
// 	ft_buff = ft_strstr(str, to_find);
// 	if (buff != ft_buff)
// 		printf("NOK");
// 	else
// 		printf("[2] OK. expected: %s result: %s\n", buff, ft_buff);
// 	return (0);
// }
