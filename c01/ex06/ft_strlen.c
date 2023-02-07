/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-b <glopes-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:41:58 by glopes-b          #+#    #+#             */
/*   Updated: 2023/02/05 16:09:29 by glopes-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		n++;
	}
	return (n);
}

// int	main(void)
// {
// 	char 	*str = "123456789";
// 	int		size;

// 	size = ft_strlen(str);
// 	printf("str=\"%s\"\nstrlen=%d\n", str, size);
// 	return (0);
// }
