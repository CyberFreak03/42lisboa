/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-b <glopes-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 13:57:55 by jfaustin          #+#    #+#             */
/*   Updated: 2023/02/07 10:48:45 by glopes-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] >= 0 && str[c] < 32) || (str[c] >= 127))
		{
			return (0);
		}
		c++;
	}
	return (1);
}

// int	main(void)
// {
// 	char	*str1;
// 	char	*str2;
// 	char	*str3;
// 	char	*str4;
// 	char	*str5;

// 	str1 = "ABCDEFGHI";
// 	str2 = "BCDEFGHI";
// 	str3 = "ABCDFGHI";
// 	str4 = "ABCDEFGH";
// 	str5 = "";
// 	printf("str1: %s, is_printable: %d\n", str1, ft_str_is_printable(str1));
// 	printf("str2: %s, is_printable: %d\n", str2, ft_str_is_printable(str2));
// 	printf("str3: %s, is_printable: %d\n", str3, ft_str_is_printable(str3));
// 	printf("str4: %s, is_printable: %d\n", str4, ft_str_is_printable(str4));
// 	printf("str5: %s, is_printable: %d\n", str5, ft_str_is_printable(str5));
// 	return (0);
// }
