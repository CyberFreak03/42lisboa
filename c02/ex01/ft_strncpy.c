/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-b <glopes-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:57:17 by glopes-b          #+#    #+#             */
/*   Updated: 2023/02/05 19:16:47 by glopes-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	chn_val;

	chn_val = 0;
	while (*(src + chn_val) != '\0' && chn_val < n)
	{
		*(dest + chn_val) = *(src + chn_val);
		chn_val++;
	}
	while (chn_val < n)
	{
		*(dest + chn_val) = '\0';
		chn_val++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char	string1[] = "abcde";
// 	char	string2[] = "12345";
// 	int		size = 3;

// 	printf("===== Before ft_strncpy() =====\n");
// 	printf("string1: %s;\n", string1);
// 	printf("string2: %s;\n", string2);
// 	printf("\n");
// 	ft_strncpy(string1, string2, size);
// 	printf("===== After ft_strncpy() =====\n");
// 	printf("string1: %s;\n", string1);
// 	printf("string2: %s;\n", string2);
// 	printf("\n");
// 	return (0);
// }