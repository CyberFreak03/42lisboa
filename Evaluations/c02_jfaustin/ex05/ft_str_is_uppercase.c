/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-b <glopes-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 13:37:24 by jfaustin          #+#    #+#             */
/*   Updated: 2023/02/05 17:00:43 by glopes-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] < 'A' || str[c] > 'Z')
		{
			return (0);
		}
		c++;
	}
	return (1);
}

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char	*str1;
	char	*str2;
	char	*str3;
	char	*str4;
	char	*str5;

	str1 = "aBCDEFGHI";
	str2 = "Abcdefghi";
	str3 = "abc:efghi";
	str4 = "";
	str5 = "abcdefgh2";
	printf("str1: %s, is_uppercase: %d\n", str1, ft_str_is_uppercase(str1));
	printf("str2: %s, is_uppercase: %d\n", str2, ft_str_is_uppercase(str2));
	printf("str3: %s, is_uppercase: %d\n", str3, ft_str_is_uppercase(str3));
	printf("str4: %s, is_uppercase: %d\n", str4, ft_str_is_uppercase(str4));
	printf("str5: %s, is_uppercase: %d\n", str5, ft_str_is_uppercase(str5));
	return (0);
}
