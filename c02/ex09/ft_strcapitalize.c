/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-b <glopes-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 11:25:05 by glopes-b          #+#    #+#             */
/*   Updated: 2023/02/14 17:38:55 by glopes-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	n;

	ft_strlowcase(str);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			n = str[i - 1];
			if (n < 48 || (n > 57 && n < 65) || (n > 90 && n < 97) || n > 122)
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char str1[] = "teste 42teste";
// 	char str2[] = "TESTE 42TESTE";
// 	char str3[] = "te+st|e t2este";
// 	char str4[] = "TE+STE*t2ESTE";
// 	char str5[] = "^uIv#= =9Hf~2y@F3A)FTzBgF";
// 	char str6[] = "tsR1|vn_WE}7X6{Vm2vQf(rG}qdnT`1,qH+n";

// 	printf("str1: %s\n", str1);
// 	ft_strcapitalize(str1);
// 	printf("str1_c: %s\n", str1);
// 	printf("str2: %s\n", str2);
// 	ft_strcapitalize(str2);
// 	printf("str2_c: %s\n", str2);
// 	printf("str3: %s\n", str3);
// 	ft_strcapitalize(str3);
// 	printf("str3_c: %s\n", str3);
// 	printf("str4: %s\n", str4);
// 	ft_strcapitalize(str4);
// 	printf("str4_c: %s\n", str4);
// 	printf("str5: %s\n", str5);
// 	ft_strcapitalize(str5);
// 	printf("str5_c: %s\n", str5);
// 	printf("str6: %s\n", str6);
// 	ft_strcapitalize(str6);
// 	printf("str6_c: %s\n", str6);
// 	return (0);
// }
