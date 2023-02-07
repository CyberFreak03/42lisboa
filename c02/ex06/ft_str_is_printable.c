/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-b <glopes-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 19:03:10 by glopes-b          #+#    #+#             */
/*   Updated: 2023/02/05 19:15:53 by glopes-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if ((str[n] >= 0 && str[n] < 32) || (str[n] >= 127))
		{
			return (0);
		}
		n++;
	}
	return (1);
}

// int	main(void)
// {
// 	char	*str1;
// 	char	*str2;
// 	char	*str3;
// 	char	*str4;

// 	str1 = calloc(10, sizeof(char));
// 	str2 = calloc(10, sizeof(char));
// 	str3 = calloc(10, sizeof(char));
// 	str4 = calloc(10, sizeof(char));
// 	str1 = "ABCDEFGHI";
// 	str2 = "BCDEFGHI";
// 	str3 = "ABCDFGHI";
// 	str4 = "ABCDEFGH";
// 	printf("str1: %s, is_printable: %d\n", str1, ft_str_is_printable(str1));
// 	printf("str2: %s, is_printable: %d\n", str2, ft_str_is_printable(str2));
// 	printf("str3: %s, is_printable: %d\n", str3, ft_str_is_printable(str3));
// 	printf("str4: %s, is_printable: %d\n", str4, ft_str_is_printable(str4));
// 	return (0);
// }
