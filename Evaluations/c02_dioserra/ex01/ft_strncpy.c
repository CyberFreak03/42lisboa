/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-b <glopes-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 17:29:44 by dioserra          #+#    #+#             */
/*   Updated: 2023/02/09 17:03:30 by glopes-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int	main(void)
{
	char	string1[] = "abcde";
	char	string2[] = "12345";
	int		size = 3;

	printf("===== Before ft_strncpy() =====\n");
	printf("string1: %s;\n", string1);
	printf("string2: %s;\n", string2);
	printf("\n");
	ft_strncpy(string1, string2, size);
	printf("===== After ft_strncpy() =====\n");
	printf("string1: %s;\n", string1);
	printf("string2: %s;\n", string2);
	printf("\n");
	return (0);
}
