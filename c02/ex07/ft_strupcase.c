/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-b <glopes-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 11:02:33 by glopes-b          #+#    #+#             */
/*   Updated: 2023/02/07 11:24:43 by glopes-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if (str[n] >= 'a' && str[n] <= 'z')
			str[n] -= 32;
			n++;
	}
	return (str);
}

// int	main(void)
// {
// 	char	str1[] = "abcdefghi";
// 	char	str2[] = "AbcDefGhI";
// 	char	str3[] = "ABCDEFGHI";

// 	printf("str1: %s\n", str1);
// 	printf("str2: %s\n", str2);
// 	printf("str3: %s\n", str3);
// 	ft_strupcase(str1);
// 	ft_strupcase(str2);
// 	ft_strupcase(str3);
// 	printf("str1: %s\n", str1);
// 	printf("str2: %s\n", str2);S
// 	printf("str3: %s\n", str3);
// 	return (0);
// }
