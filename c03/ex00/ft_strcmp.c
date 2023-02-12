/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-b <glopes-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:34:59 by glopes-b          #+#    #+#             */
/*   Updated: 2023/02/09 18:30:53 by glopes-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

// int	main(void)
// {
// 	char	*s1;
// 	char	*s2;
// 	char	*s3;
// 	char	*s4;
// 	char	s5[] = {'a', 'b', 'c', -10, -20, '\0'};
// 	char	*s6;
// 	char	*s7;

// 	s1 = calloc(10, sizeof(char));
// 	s2 = calloc(8, sizeof(char));
// 	s3 = calloc(10, sizeof(char));
// 	s4 = calloc(10, sizeof(char));
// 	s6 = calloc(10, sizeof(char));
// 	s7 = calloc(1, sizeof(char));
// 	s1 = "abcdefghi";
// 	s2 = "abcdefg";
// 	s3 = "abcdEfghi";
// 	s4 = "ab0defghi";
// 	s6 = "abcdefghi";
// 	s7 = "";
// 	printf("(s1, s2)= %d\n(s1, s2)= %d\n\n", ft_strcmp(s1, s2), strcmp(s1, s2));
// 	printf("(s1, s3)= %d\n(s1, s3)= %d\n\n", ft_strcmp(s1, s3), strcmp(s1, s3));
// 	printf("(s1, s4)= %d\n(s1, s4)= %d\n\n", ft_strcmp(s1, s4), strcmp(s1, s4));
// 	printf("(s1, s5)= %d\n(s1, s5)= %d\n\n", ft_strcmp(s1, s5), strcmp(s1, s5));
// 	printf("(s1, s6)= %d\n(s1, s6)= %d\n\n", ft_strcmp(s1, s6), strcmp(s1, s6));
// 	printf("(s1, s7)= %d\n(s1, s7)= %d\n\n", ft_strcmp(s1, s7), strcmp(s1, s7));
// 	return (0);
// }
