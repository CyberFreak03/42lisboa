/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-b <glopes-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 14:19:16 by leonpere          #+#    #+#             */
/*   Updated: 2023/02/05 16:20:41 by glopes-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (!(str[a] >= 'a' && str[a] <= 'z'))
		{
			return (0);
		}
		a++;
	}
	return (1);
}


int	main(void)
{
	printf("%d", ft_str_is_lowercase("abcdefghijk"));
	printf("\n%d", ft_str_is_lowercase("abcdeFghij"));
	printf("\n%d", ft_str_is_lowercase("abnsjud9Eq"));
}
		
